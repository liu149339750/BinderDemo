LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= testBinderClient

LOCAL_SRC_FILES:=               \
    client.cpp           \

LOCAL_SHARED_LIBRARIES :=       \
    libbinder                   \
    liblog                      \
    libutils                    \
    libtestinterface

LOCAL_C_INCLUDES :=             \
    $(LOCAL_PATH)/../interface/include

include $(BUILD_EXECUTABLE)



