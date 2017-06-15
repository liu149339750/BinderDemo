LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= libtestinterface

LOCAL_SRC_FILES:=               \
    ITest.cpp           \

LOCAL_SHARED_LIBRARIES :=       \
    libbinder                   \
    libutils                    \

LOCAL_C_INCLUDES :=             \
    include/ITest.h

include $(BUILD_SHARED_LIBRARY)



