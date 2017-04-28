//
// Created by Day on 2017/4/28.
//

#ifndef GYMCARD_QUERYCARD_H
#define GYMCARD_QUERYCARD_H

#include "OperationCardLib.h"

//继承操作卡库的类
//存在就返回，不存在询问是否添加
class QueryCard:OperationCardLib {
private:
public:
    QueryCard();
    bool nameQuery();   //使用名字查找
    bool cardQuery();   //使用卡号查找
};

QueryCard::QueryCard() {

}

bool QueryCard::nameQuery() {

}

bool QueryCard::cardQuery() {

}

#endif //GYMCARD_QUERYCARD_H
