#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include "Service.h"
#define LOG_TAG "liuwei"

namespace android{
void TestService::instantiate()
{
	ALOGE("testService init");
    	defaultServiceManager()->addService(
           	android::String16("binder.hello"), new TestService());
}

void TestService::hello()
{
ALOGE("hello");
}

TestService::TestService(){
    int a =1;
    ALOGE("test created");

}

TestService::~TestService(){
    ALOGE("test destroyed");
}

status_t BnTest::onTransact(
    uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags)
{
    switch (code) {
        case DISCONNECT: {
            CHECK_INTERFACE(ITest, data, reply);
            hello();
            return NO_ERROR;
        } break;
        default:
            return BBinder::onTransact(code, data, reply, flags);
    }
}



}



int main(int argc, char* argv[])
{
	ALOGE("test instantiate start");
	android::TestService::instantiate();
    android::ProcessState::self()->startThreadPool();
    android::IPCThreadState::self()->joinThreadPool();
    ALOGE("test instantiate end");
return 0;
}


