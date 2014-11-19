#ifndef ABSTRACTNMEAOBJECT_H
#define ABSTRACTNMEAOBJECT_H
namespace nmea{
    namespace codec{
        #include <string>
        using namespace std;
        class AbstractNmeaObject{
        public:
            string         id;                 //
            string         utc_time;           //UTC时间，hhmmss.ss格式
            unsigned char  latitude;           //纬度,N/S
            double         latitude_degree;    //纬度数,度分格式(xxxx.xxxx)
            unsigned char  longtitude;         //经度,E/W
            double         longtitude_degree;  //经度数,度分格式(xxxx.xxxx)
            bool           is_validate;        //是否有效，初始为false
        };
    }
}
#endif // ABSTRACTNMEAOBJECT_H
