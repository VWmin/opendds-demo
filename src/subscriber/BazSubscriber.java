package subscriber;

import DDS.*;
import OpenDDS.DCPS.*;
import org.omg.CORBA.StringSeqHolder;
import Baz.*;


public class BazSubscriber {
    public static void main(String[] args) {
        DomainParticipantFactory dpf =
                TheParticipantFactory.WithArgs(new StringSeqHolder(args));
        if (dpf == null) {
            System.err.println ("Domain Participant Factory not found");
            return;
        }
        DomainParticipant dp = dpf.create_participant(42,
                PARTICIPANT_QOS_DEFAULT.get(), null, DEFAULT_STATUS_MASK.value);
        if (dp == null) {
            System.err.println("Domain Participant creation failed");
            return;
        }
        BarTypeSupportImpl servant = new BarTypeSupportImpl();
        if (servant.register_type(dp, "") != RETCODE_OK.value) {
            System.err.println ("register_type failed");
            return;
        }
        Topic top = dp.create_topic("Demo Topic",
                servant.get_type_name(),
                TOPIC_QOS_DEFAULT.get(), null,
                DEFAULT_STATUS_MASK.value);

        Subscriber sub = dp.create_subscriber(
                SUBSCRIBER_QOS_DEFAULT.get(), null, DEFAULT_STATUS_MASK.value);


        // 向中间件提供listener是通知数据接收和访问数据的最简单方式
        DataReaderListenerImpl listener = new DataReaderListenerImpl();
        GuardCondition gc = new GuardCondition();
        WaitSet ws = new WaitSet();
        ws.attach_condition(gc);
        listener.set_guard_condition(gc);

        DataReader dr = sub.create_datareader(
                top, DATAREADER_QOS_DEFAULT.get(), listener,
                DEFAULT_STATUS_MASK.value);
        if (dr == null) {
            System.err.println("ERROR: DataReader creation failed");
            return;
        }

        Duration_t timeout = new Duration_t(DURATION_INFINITE_SEC.value,
                DURATION_INFINITE_NSEC.value);


        ConditionSeqHolder cond = new ConditionSeqHolder(new Condition[]{});
        if (ws.wait(cond, timeout) != RETCODE_OK.value) {
            System.err.println("ERROR: wait() failed.");
            return;
        }
        System.out.println("Subscriber Report Validity");
        listener.report_validity();

        ws.detach_condition(gc);

        System.out.println("Stop Subscriber");

        // app退出，清理资源
        dp.delete_contained_entities();
        dpf.delete_participant(dp);
        // 清理掉所有OpenDDS相关的资源，以避免DCPSInfoRepo在不存在的endpoint之间创建关联
        TheServiceParticipant.shutdown();

        System.out.println("Subscriber exiting");

    }
}
