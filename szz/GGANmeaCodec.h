#ifndef GGANMEACODEC_H
#define GGANMEACODEC_H
#include "GGANmeaObject.h"
#include "AbstractNmeaCodec.h"
class GGANmeaCodec : public AbstractNmeaCodec
{
public:
    GGANmeaCodec();
    GGANmeaObject* decode(char*);
    //std::vector<std::string> encode(GGANmeaObject*);
    std::string name();
};

#endif // GGANMEACODEC_H
