package subscriber;

import Baz.Bar;
import Baz.BarDataReader;
import Baz.BarDataReaderHelper;
import Baz.BarHolder;
import DDS.*;
import sun.reflect.generics.reflectiveObjects.NotImplementedException;

import java.util.ArrayList;

// 到来的消息由listener在中间件的线程中处理
// DDS提供了该虚基类，实现了listener的基本功能，用户可以实现虚方法来实现app特化功能
public class DataReaderListenerImpl extends DDS._DataReaderListenerLocalBase{
    private int num_reads;
    private GuardCondition gc;
    private int expected_count = 100;
    private static final int N_EXPECTED = 100;
    private ArrayList<Boolean> counts = new ArrayList<Boolean>(N_EXPECTED);

    public void set_guard_condition(GuardCondition guard_cond) {
        gc = guard_cond;
    }

    @Override
    public void on_requested_deadline_missed(DataReader dataReader, RequestedDeadlineMissedStatus requestedDeadlineMissedStatus) {
        System.out.println("doing noting...");
    }

    @Override
    public void on_requested_incompatible_qos(DataReader dataReader, RequestedIncompatibleQosStatus requestedIncompatibleQosStatus) {
        System.out.println("doing noting...");
    }

    @Override
    public void on_sample_rejected(DataReader dataReader, SampleRejectedStatus sampleRejectedStatus) {
        System.out.println("doing noting...");
    }

    @Override
    public void on_liveliness_changed(DataReader dataReader, LivelinessChangedStatus livelinessChangedStatus) {
        System.out.println("doing noting...");
    }

    private void initialize_counts() {
        if (counts.size() > 0) {
            return;
        }

        for (int i = 0; i < N_EXPECTED; ++i) {
            counts.add(false);
        }
    }

    @Override
    public void on_data_available(DataReader dataReader) {
        initialize_counts();
        num_reads++;

        // app需要将泛型缩小到自己的类型
        BarDataReader barDataReader = BarDataReaderHelper.narrow(dataReader);
        if (barDataReader == null) {
            System.err.println ("read: narrow failed.");
            return;
        }
        //  为特定消息类型和关联的样本信息(SampleInfo)创建holder
        // sampleInfo中包含了sample的metadata
        BarHolder bh = new BarHolder(new Bar());
        SampleInfoHolder sih = new SampleInfoHolder(new SampleInfo(0, 0, 0,
                new DDS.Time_t(), 0, 0, 0, 0, 0, 0, 0, false, 0));
        // 并从DataReader中获取sample，被获取的sample会从DataReader的sample pool中移除
        int status = barDataReader.take_next_sample(bh, sih);
        if (status == RETCODE_OK.value) {
            // 通过SampleInfo中的valid_data判断sample是否有效
            if (sih.value.valid_data) {
                System.out.println("SampleInfo.sample_rank = " + sih.value.sample_rank);
                System.out.println("SampleInfo.instance_state = " + sih.value.instance_state);
                if (sih.value.valid_data) {
                    System.out.println("Bar Message id = " + bh.value.x);
                }else if (sih.value.instance_state == NOT_ALIVE_DISPOSED_INSTANCE_STATE.value) {
                    System.out.println ("instance is disposed");
                }
                else if (sih.value.instance_state == NOT_ALIVE_NO_WRITERS_INSTANCE_STATE.value) {
                    System.out.println ("instance is unregistered");
                } else {
                    System.out.println ("DataReaderListenerImpl::on_data_available: "+
                            "received unknown instance state "+
                            sih.value.instance_state);
                }
            }
        } else if (status == RETCODE_NO_DATA.value) {
            System.err.println ("ERROR: reader received DDS::RETCODE_NO_DATA!");
        } else {
            System.err.println ("ERROR: read Message: Error: "+ status);
        }

        if (bh.value.x + 1 == expected_count) {
            gc.set_trigger_value(true);
        }
    }

    @Override
    public void on_subscription_matched(DataReader dataReader, SubscriptionMatchedStatus subscriptionMatchedStatus) {
        System.out.println("doing noting...");
    }

    @Override
    public void on_sample_lost(DataReader dataReader, SampleLostStatus sampleLostStatus) {
        System.out.println("doing noting...");
    }


    public void report_validity() {
        int count = 0;
        int missed_counts = 0;
        for (Boolean val : counts) {
            if (val == false)
                ++missed_counts;
        }
        if (missed_counts > N_EXPECTED - expected_count) {
            System.out.println("ERROR: Missing " + missed_counts + " messages");
        }
    }
}
