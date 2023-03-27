package Baz;
public abstract class BarDataReaderHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:Baz/BarDataReader:1.0"; }
  public static BarDataReader narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof BarDataReader)
      return (BarDataReader)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static BarDataReader unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof BarDataReader)
      return (BarDataReader)obj;
    else
      return native_unarrow(obj);
  }

  private native static BarDataReader native_unarrow(org.omg.CORBA.Object obj);

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
