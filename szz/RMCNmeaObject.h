#ifndef RMCNMEAOBJECT_H
#define RMCNMEAOBJECT_H
#include "AbstractNmeaObject.h"
//例句$GPRMC,085223.136,A,3957.6286,N,11619.2078,E,0.06,36.81,180908,,,A*57  13个字段
//    0      1          2 3         4 5          6 7    8     9        12
class RMCNmeaObject : public AbstractNmeaObject
{
public:
    char            status;           //状态,A(定位),V(未定位)
    double          speed;            //速度,节
    unsigned float  azimuth;          //方位角,度
    string          utc_date;         //utc日期,DDMMYY格式
    unsigned int    declination;      //磁偏角,(000-180)
    char            declination_dir;  //磁偏角方向,E/W
    string          check;            //12校验值
};
#endif // RMCNMEAOBJECT_H
