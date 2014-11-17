#include <iostream>
#include "GGANmeaCodec.h"
int main(int argc, char *argv[])
{
    char* ggachar = "$GPGGA,085223.136,3957.6286,N,11619.2078,E,1,03,4.0,6.5,M,-6.5,M,0.0,0000*63";
    char* rmcchar = "$GPRMC,085223.136,A,3957.6286,N,11619.2078,E,0.06,36.81,180908,,,A*57";
    std::cout << "test success" << std::endl;
    GGANmeaCodec ggac = GGANmeaCodec();
    ggac.decode(ggachar);
    string stest = ggac.name();
    std::cout << stest << std::endl;
    return 0;
}
