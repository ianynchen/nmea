#ifndef ABSTRACTNMEACODEC_H
#define ABSTRACTNMEACODEC_H
#include "AbstractNmeaObject.h"
#include <vector>
namespace nmea{
namespace codec{
    class AbstractNmeaCodec {
    protected:
        std::string id;
    public:
      virtual AbstractNmeaObject* decode(vector<string> v)=0;
      //std::vector<std::string> encode(AbstractNmeaObject*);
      virtual std::string name()=0;

    };
    //name对应codec能够解析的语句，例如VDO、RMC等等
}
}
#endif // ABSTRACTNMEACODEC_H
