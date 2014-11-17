#ifndef ABSTRACTNMEACODEC_H
#define ABSTRACTNMEACODEC_H
#include "AbstractNmeaObject.h"
#include <vector>

class AbstractNmeaCodec {
protected:
    std::string id;
public:
  //AbstractNmeaObject* decode(char*);
  //std::vector<std::string> encode(AbstractNmeaObject*);
  virtual std::string name() = 0;
};
//name对应codec能够解析的语句，例如VDO、RMC等等

#endif // ABSTRACTNMEACODEC_H
