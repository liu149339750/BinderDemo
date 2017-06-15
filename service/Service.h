#include <binder/IInterface.h>
#include <utils/Log.h>
#include "ITest.h"

namespace android {

class BnTest: public BnInterface<ITest>
{
public:
    virtual status_t    onTransact( uint32_t code,
                                    const Parcel& data,
                                    Parcel* reply,
                                    uint32_t flags = 0);
};

class TestService :public BnTest
{
public:
    static void instantiate();
    void hello();
private:
                            TestService();
    virtual                 ~TestService();
};
}
