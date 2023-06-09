package Baz;
public class _BarTypeSupportTAOPeer extends i2jrt.TAOLocalObject implements BarTypeSupport {
  protected _BarTypeSupportTAOPeer(long ptr) {
    super(ptr);
  }

  public native DDS.DataWriter create_datawriter();

  public native DDS.DataReader create_datareader();

  public native DDS.DataReader create_multitopic_datareader();

  public native boolean has_dcps_key();

  public native int unregister_type(DDS.DomainParticipant domain, String type_name);

  public native void representations_allowed_by_type(DDS.DataRepresentationIdSeqHolder seq);

  public native int register_type(DDS.DomainParticipant domain, String type_name);

  public native String get_type_name();


  static {
    String propVal = System.getProperty("opendds.native.debug");
    if (propVal != null && ("1".equalsIgnoreCase(propVal) ||
        "y".equalsIgnoreCase(propVal) ||
        "yes".equalsIgnoreCase(propVal) ||
        "t".equalsIgnoreCase(propVal) ||
        "true".equalsIgnoreCase(propVal)))
      System.loadLibrary("Food");
    else System.loadLibrary("Foo");
  }

}
