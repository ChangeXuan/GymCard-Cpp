//
// Created by Day on 2017/4/28.
//

#ifndef GYMCARD_OPERATIONCARDLIB_H
#define GYMCARD_OPERATIONCARDLIB_H

class OperationCardLib {
private:
    bool isRepeat = false;  //卡是否存在的标志
public:
    OperationCardLib();
    void saveNewCard(); //保存新的卡号
    bool findCard();  //通过卡号找卡
    bool findName();  //通过名字找卡
    virtual ~OperationCardLib();
};

OperationCardLib::OperationCardLib() {

}

OperationCardLib::~OperationCardLib() {

}

void OperationCardLib::saveNewCard() {

}

bool OperationCardLib::findCard() {

}

bool OperationCardLib::findName() {

}

#endif //GYMCARD_OPERATIONCARDLIB_H
