#include "include/ITest.h"
#include <binder/Parcel.h>


namespace android{
class BpTest: public BpInterface<ITest>
{
public:
    BpTest(const sp<IBinder>& impl)
        : BpInterface<ITest>(impl)
    {
    }

    void hello()
    {
        Parcel data, reply;
        data.writeInterfaceToken(ITest::getInterfaceDescriptor());
        remote()->transact(DISCONNECT, data, &reply);
    }

};

IMPLEMENT_META_INTERFACE(Test, "android.media.ITest");
}
