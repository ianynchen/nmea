#ifndef GGANMEACODEC_H
#define GGANMEACODEC_H
#include "util.h"
#include "GGANmeaObject.h"
#include "AbstractNmeaCodec.h"
namespace nmea{
namespace codec{
    class GGANmeaCodec : public AbstractNmeaCodec
    {
    private:
        GGANmeaObject *GGAo;
    public:
        GGANmeaCodec();
        ~GGANmeaCodec();
        GGANmeaObject* decode(vector<string> v);
        //std::vector<std::string> encode(GGANmeaObject*);
        std::string name();
    };
}
}

#endif // GGANMEACODEC_H
