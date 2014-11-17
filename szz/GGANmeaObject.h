#ifndef GGANMEAOBJECT_H
#define GGANMEAOBJECT_H

#include "AbstractNmeaObject.h"
//例句$GPGGA,085223.136,3957.6286,N,11619.2078,E,1,03,4.0,6.5,M,-6.5,M,0.0,0000*63
//    0      1          2         3 4          5 6 7  8   9  1011   1213  14
class GGANmeaObject : public AbstractNmeaObject
{
public:
    unsigned int    status;           //GPS状态，0=未定位，1=非差分定位，2=差分\
                                      //定位，3=无效PPS，6=正在估算
    unsigned int    satellite;        //正在使用的卫星数量(00 - 12)(前导位数\
                                      //不足则补0)
    float           hdop;             //HDOP水平精度因子(0.5 - 99.9)
    float           altitude;         //海拔高度(-9999.9 - 99999.9)
    float           height;           //地球椭球面相对大地水准面的高度
    float           diff_sec;         //差分时间(从最近一次接收到差分信号开始的\
                                      //秒数，如果不是差分定位将为空)
    unsigned int    diff_site;        //差分站ID号0000 - 1023(前导位数不足则补0，\
                                      //如果不是差分定位将为空)
    std::string     check;            //12校验值
};

#endif // GGANMEAOBJECT_H
