package Baz;
public class BarTypeSupportImpl extends _BarTypeSupportTAOPeer {
    public BarTypeSupportImpl() {
        super(_jni_init());
    }
    private static native long _jni_init();
}
