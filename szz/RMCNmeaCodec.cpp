#include "RMCNmeaCodec.h"
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace nmea;
using namespace codec;
//例句$GPRMC,085223.136,A,3957.6286,N,11619.2078,E,0.06,36.81,180908,,,A*57  14个字段
//        0             1                   2  3                 4 5                   6 7      8         9            12  13
using namespace std;
RMCNmeaCodec::RMCNmeaCodec()
{
    RMCo = new RMCNmeaObject();
}
RMCNmeaCodec::~RMCNmeaCodec()
{
    delete RMCo;
}
RMCNmeaObject* RMCNmeaCodec::decode(vector<string> raw_vector)
{
    RMCo->id = raw_vector[0].substr(1,(raw_vector[0]).size()-1);
    RMCo->utc_time = raw_vector[1];
    RMCo->status = (unsigned char)raw_vector[2][0];
    RMCo->latitude_degree = atof(raw_vector[3].c_str());
    RMCo->latitude = (unsigned char)raw_vector[4][0];
    RMCo->longtitude_degree = atof(raw_vector[5].c_str());
    RMCo->longtitude = (unsigned char)raw_vector[6][0];
    RMCo->speed = atof(raw_vector[7].c_str());
    RMCo->azimuth = atof(raw_vector[8].c_str());
    RMCo->utc_date = raw_vector[9];
    RMCo->declination = (unsigned int)atoi(raw_vector[10].c_str());
    RMCo->declination_dir = (unsigned char)raw_vector[11][0];
    vector<string> last = split(raw_vector[12], "*");
    RMCo->check = last[1];
    RMCo->is_validate = true;
    id = RMCo->id;
    return RMCo;
}
//std::vector<std::string> RMCNmeaCodec::encode(RMCNmeaObject*)
//{

//}
std::string RMCNmeaCodec::name()
{
    return id;
}
