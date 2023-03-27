package Baz;
public abstract class BarDataWriterHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:Baz/BarDataWriter:1.0"; }
  public static BarDataWriter narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof BarDataWriter)
      return (BarDataWriter)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static BarDataWriter unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof BarDataWriter)
      return (BarDataWriter)obj;
    else
      return native_unarrow(obj);
  }

  private native static BarDataWriter native_unarrow(org.omg.CORBA.Object obj);

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
