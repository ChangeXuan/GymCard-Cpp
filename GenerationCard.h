//
// Created by Day on 2017/4/28.
//

#ifndef GYMCARD_GENERATIONCARD_H
#define GYMCARD_GENERATIONCARD_H

#include <objbase.h>
#include <string>
#include "OperationCardLib.h"

using namespace std;
const int GUID_LEN = 64;

//继承操作卡库的类
//生成GUID后，需要将GUID加入cardLib中
//但是保存GUID又不属于生成GUID这个功能类
class GenerationCard:OperationCardLib {
private:
    char *format64 = "%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X";
    char *format32 = "%08X-%04X-%04x-%02X%02X";
    char *format16 = "%08X-%04X-%04x";
    char *usrFormat = format64;
public:
    enum formatKey {key64,key32,key16};
    GenerationCard();
    void setGUID(formatKey);    //设置生成GUID的长度
    string getGUID();   //取得GUID
};

GenerationCard::GenerationCard() {

}

void GenerationCard::setGUID(formatKey key) {
    switch (key) {
        case key64:
            usrFormat = format64;
            break;
        case key32:
            usrFormat = format32;
            break;
        case key16:
            usrFormat = format16;
            break;
    }
}

string GenerationCard::getGUID() {
    GUID guid;
    char buffer[GUID_LEN] = { 0 };
    if ( CoCreateGuid(&guid) ) {
        fprintf(stderr, "create guid error\n");
    } else {
        snprintf(buffer, GUID_LEN, usrFormat,
                 guid.Data1, guid.Data2, guid.Data3,
                 guid.Data4[0], guid.Data4[1], guid.Data4[2],
                 guid.Data4[3], guid.Data4[4], guid.Data4[5],
                 guid.Data4[6], guid.Data4[7]);
    }
    return buffer;
}

#endif //GYMCARD_GENERATIONCARD_H
