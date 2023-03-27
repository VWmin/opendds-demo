package publisher;

import Baz.*;
import DDS.*;
import OpenDDS.DCPS.*;
import org.omg.CORBA.StringSeqHolder;

public class BazPublisher {
    public static void main(String[] args) throws InterruptedException {
        DomainParticipantFactory dpf =
                TheParticipantFactory.WithArgs(new StringSeqHolder(args));
        if (dpf == null) {
            System.err.println("ERROR: Domain Participant Factory not found");
            return;
        }

        final int DOMAIN_ID = 42;
        DomainParticipant dp = dpf.create_participant(DOMAIN_ID,
                PARTICIPANT_QOS_DEFAULT.get(), null, DEFAULT_STATUS_MASK.value);
        if (dp == null) {
            System.err.println ("Domain Participant creation failed");
            return;
        }

        // BarTypeSupportImpl is type specific
        BarTypeSupportImpl servant = new BarTypeSupportImpl();
        if (servant.register_type(dp, "") != RETCODE_OK.value) {
            System.err.println("ERROR: register_type failed");
            return;
        }

        Topic top = dp.create_topic("Demo Topic",
                servant.get_type_name(),
                TOPIC_QOS_DEFAULT.get(), null,
                DEFAULT_STATUS_MASK.value);

        Publisher pub = dp.create_publisher(
                PUBLISHER_QOS_DEFAULT.get(),
                null,
                DEFAULT_STATUS_MASK.value);

        // data writer is for a specific topic.
        DataWriter dw = pub.create_datawriter(
                top, DATAWRITER_QOS_DEFAULT.get(), null, DEFAULT_STATUS_MASK.value);

        // 将泛型 data writer 缩小到特定类型，并注册希望发布的实例
        BarDataWriter bdw = BarDataWriterHelper.narrow(dw);
        Bar msg = new Bar();
        int handle = bdw.register_instance(msg);

        int ret = RETCODE_TIMEOUT.value;
        for(int i=0; i<100; i++) {
            // 将msg发布到topic上
            // 循环写入，但是避免忙等
            System.out.println("sending msg " + i);
            msg.x = i;
            while ((ret = bdw.write(msg, handle)) == RETCODE_TIMEOUT.value);
            if (ret != RETCODE_OK.value) {
                System.err.println("ERROR " + i + " write() returned " + ret);
            }
            Thread.sleep(1000);
        }



        System.out.println("Stop Publisher");

        // Clean up
        dp.delete_contained_entities();
        dpf.delete_participant(dp);
        TheServiceParticipant.shutdown();

        System.out.println("Publisher exiting");

    }
}