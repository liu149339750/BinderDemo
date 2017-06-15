#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "ITest.h"

using namespace android;

int main(int argc, char* argv[]){
    ALOGE("test client start");
    sp<IServiceManager> sm = defaultServiceManager();
    sp<IBinder> b;
    sp<ITest> sTest;

    do{
        b = sm->getService(String16("binder.hello"));
        if(b!=0) break;
        ALOGE("TestService is not working, waiting...");
        usleep(1000000);
    }while(true);

    sTest = interface_cast<ITest>(b);
    sTest->hello();

    ALOGE("test instantiate end");
    return 0; 

}
