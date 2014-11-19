#include "NmeaCodecManager.h"
using namespace nmea;
using namespace codec;
NmeaCodecManager::NmeaCodecManager()
{
    codecs["GPGGA"] = new GGANmeaCodec();
    codecs["GPRMC"] = new RMCNmeaCodec();
}

NmeaCodecManager::~NmeaCodecManager()
{
    //delete
}

AbstractNmeaObject* NmeaCodecManager::decode(char* raw) {
    string str = string(raw);
    string pattern = ",";
    vector<string> raw_vector;
    raw_vector = split(str, pattern);

    string id = raw_vector[0].substr(1,(raw_vector[0]).size()-1);
    return codecs[id]->decode(raw_vector);
}

//std::vector<std::string> NmeaCodecManager::encode(AbstractNmeaObject*){}
