//
// Created by Administrator on 2019/1/16.
//
#include "com_ysj_yutang_ndk_JNI.h"

JNIEXPORT jstring JNICALL Java_com_ysj_yutang_ndk_JNI_getString(JNIEnv *env, jobject obj){

    return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
}
