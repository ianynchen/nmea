#include "GGANmeaCodec.h"
#include "util.h"
#include <iostream>
#include <iomanip>
using namespace std;
GGANmeaCodec::GGANmeaCodec()
{
}
GGANmeaObject* GGANmeaCodec::decode(char* raw)
{
    string str = string(raw);
    string pattern = ",";
    vector<string> raw_vector;
    raw_vector = split(str, pattern);
    GGANmeaObject *GGAo = new GGANmeaObject();
    GGAo->id = raw_vector[0].substr(1,(raw_vector[0]).size()-1);
    GGAo->utc_time = raw_vector[1];
    GGAo->latitude_degree = atof(raw_vector[2].c_str());
    GGAo->latitude = (unsigned char)raw_vector[3][0];
    GGAo->longtitude_degree = atof(raw_vector[4].c_str());
    GGAo->longtitude = (unsigned char)raw_vector[5][0];
    GGAo->status = (unsigned int)atoi(raw_vector[6].c_str());
    GGAo->satellite = (unsigned int)atoi(raw_vector[7].c_str());
    GGAo->hdop = atof(raw_vector[8].c_str());
    GGAo->altitude = atof(raw_vector[9].c_str());
    GGAo->height = atof(raw_vector[10].c_str());
    if(GGAo->status == 2)
    {
        GGAo->diff_sec = atof(raw_vector[11].c_str());   //
        GGAo->diff_site = atof(raw_vector[12].c_str());  //
    }

    GGAo->check = raw_vector[13];
    GGAo->is_validate = true;

    cout << fixed << showpoint;
    cout << setprecision(4) << GGAo->latitude_degree << endl;
    cout << GGAo->longtitude << endl;
    id = GGAo->id;
    return GGAo;
}
//std::vector<std::string> GGANmeaCodec::encode(GGANmeaObject*)
//{

//}
std::string GGANmeaCodec::name()
{
    return id;
}
