#ifndef NMEACODECMANAGER_H
#define NMEACODECMANAGER_H
#include <map>
#include "GGANmeaCodec.h"
#include "RMCNmeaCodec.h"
using namespace nmea;
using namespace codec;
class NmeaCodecManager {
  std::map<std::string, AbstractNmeaCodec*> codecs;
public:
  NmeaCodecManager();
  ~NmeaCodecManager();
  AbstractNmeaObject* decode(char* raw);
  //std::vector<std::string> encode(AbstractNmeaObject*);
};

#endif // NMEACODECMANAGER_H
