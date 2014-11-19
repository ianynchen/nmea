#include <iostream>
#include "NmeaCodecManager.h"
using namespace nmea;
using namespace codec;
int main(int argc, char *argv[])
{
    char* ggachar = "$GPGGA,085223.136,3957.6286,N,11619.2078,E,1,03,4.0,6.5,-6.5,0.0,0000*63";
    char* rmcchar = "$GPRMC,085223.136,A,3957.6286,N,11619.2078,E,0.06,36.81,180908,,,A*57";

    std::cout << "start test!" << std::endl;
    NmeaCodecManager *ncm = new NmeaCodecManager();
    GGANmeaObject* ggao = (GGANmeaObject*)ncm->decode(ggachar);
    cout << ggao->id << endl;
    cout << ggao->check << endl;

   RMCNmeaObject* rmco = (RMCNmeaObject*)ncm->decode(rmcchar);
   cout << rmco->check << endl;
    delete ncm;
    std::cout << "test success" << std::endl;
    return 0;
}
