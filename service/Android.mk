LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= testBinderService

LOCAL_SRC_FILES:=               \
    Service.cpp           \

LOCAL_SHARED_LIBRARIES :=       \
    libbinder                   \
    liblog                      \
    libutils                    \
    libtestinterface

LOCAL_C_INCLUDES :=             \
    Service.h  \
    $(LOCAL_PATH)/../interface/include

include $(BUILD_EXECUTABLE)



