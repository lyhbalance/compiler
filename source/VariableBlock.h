//
// Created by zpt1813061 on 2020/11/19.
//

#ifndef LEXICALANALYSIS1_0_VARIABLEBLOCK_H
#define LEXICALANALYSIS1_0_VARIABLEBLOCK_H

#include <boost/variant.hpp>
#include "StaticFlags.h"

using namespace boost;
typedef variant<int, double> complex;
//template<class T>
//class VariableBlock {
//    bool constFlag;
//    int type;
//    T value;
//public:
//    VariableBlock(int type, T value=0, bool constFlag=false);
//    bool typeCheck(int type);
//    T* getValuePtr();
//
//    bool isConstFlag() const;
//    void setConstFlag(bool constFlag);
//
//};


class VariableBlock {
    bool constFlag;
    int type;
    complex value = 0;
public:
    VariableBlock(int type, bool constFlag = false);

    int modifyValue(complex value);

    int typeCheck(complex value);

    int getType();

    complex *getValuePtr();

    bool isConstFlag() const;

    void setConstFlag(bool constFlag);

};


#endif //LEXICALANALYSIS1_0_VARIABLEBLOCK_H
