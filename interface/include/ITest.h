#include <binder/IInterface.h>


namespace android{
enum {
    DISCONNECT = IBinder::FIRST_CALL_TRANSACTION,
};

class ITest: public IInterface
{
public:
    DECLARE_META_INTERFACE(Test);

    virtual void    hello() = 0;
};
}
