#include <iostream>
#include "NmeaCodecManager.h"
#include "sentence.h"
#include <thread>
using namespace nmea;
using namespace codec;
using namespace sentence;
vector<string> cache;
void sentence_thread()
{
    //const vector<string> Cache;
    nmea::sentence::sentence s= nmea::sentence::sentence();
    s.cut(cache);
}
int main(int argc, char *argv[])
{
    vector<string> sentences;
    vector<AbstractNmeaObject> nmeaobject;
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

    std::thread t(sentence_thread);
    t.join();

    std::cout << "test success" << std::endl;
    return 0;
}
