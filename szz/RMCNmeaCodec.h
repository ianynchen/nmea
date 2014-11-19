#ifndef RMCNMEACODEC_H
#define RMCNMEACODEC_H
#include "util.h"
#include "RMCNmeaObject.h"
#include "AbstractNmeaCodec.h"
namespace nmea{
namespace codec{
    class RMCNmeaCodec : public AbstractNmeaCodec
    {
    private:
        RMCNmeaObject *RMCo ;
    public:
        RMCNmeaCodec();
        ~RMCNmeaCodec();
        RMCNmeaObject* decode(vector<string> v);
        //std::vector<std::string> encode(GGANmeaObject*);
        std::string name();
    };
}
}
#endif // RMCNMEACODEC_H
