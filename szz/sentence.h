#ifndef SENTENCE_H
#define SENTENCE_H
#include <string>
#include <vector>
using namespace std;
namespace nmea{
    namespace  sentence{
        class sentence
        {
        //private:
            //vector<string> sentences;
        public:
            sentence();
            void cut(vector<string> sentences);
            void validate(char* buf, char r[]);
        };
    }
}
#endif // SENTENCE_H
