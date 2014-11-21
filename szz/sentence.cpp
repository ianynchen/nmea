#include "sentence.h"
#include <iostream>
#include <string.h>

#define MAX_BUF 65535
using namespace std;
using namespace nmea;
using namespace sentence;
#include <stdio.h>
nmea::sentence::sentence::sentence()
{
}
void nmea::sentence::sentence::cut(vector<string> sentences)
{
    string sentencebuf = "";
    int i;
    while(true)
    {

        char buf[MAX_BUF];
        char b[255];
        int size;
        cin.getline(buf,255);
        if(strcmp(buf,"exit") == 0)
        {
            break;
        }
        size = strlen(buf);
        for(i = 0; i < size; i++)
        {
            if(buf[i] == '$' || buf[i] == '!')
            {
                strncpy(b, buf+i+1, size-i-1);
                sentencebuf = string(b);
                sentences.push_back(sentencebuf);
            }
        }
        //string sentencebuf = "";
    }
}

void nmea::sentence::sentence::validate(char * buf, char r[])
{
    char c = *(buf+0);
    while(*(buf++))
    {
        c^=*(buf);
    }
    sprintf(r, "%X%X", c>>4, c&0x0F);
}
