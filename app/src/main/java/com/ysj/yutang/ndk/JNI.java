package com.ysj.yutang.ndk;

public class JNI {

//    JNI(){
//        System.loadLibrary("JniLib");
//    }
    static {
        System.loadLibrary("JniLib");
    }

    public static native String getString();
}
