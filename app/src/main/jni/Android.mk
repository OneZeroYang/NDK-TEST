LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := JniLib
LOCAL_SRC_FILES =: com_ysj_yutang_ndk_JNI.h hello.c
include $(BUILD_SHARED_LIBRARY)