//
// Created by zpt1813061 on 2020/11/19.
//

#include "VariableBlock.h"

//template<class T>
//VariableBlock<T>::VariableBlock(int type, T value, bool constFlag):type(type), value(value), constFlag(constFlag){}
//
//template<class T>
//bool VariableBlock<T>::isConstFlag() const {
//    return constFlag;
//}
//
//template<class T>
//void VariableBlock<T>::setConstFlag(bool constFlag) {
//    VariableBlock::constFlag = constFlag;
//}
//
//template<class T>
//T *VariableBlock<T>::getValuePtr() {
//    return &value;
//}
//


int VariableBlock::typeCheck(complex value) {
    switch (type) {
        case TYPE_INT:
            if(get<int>(&value) == 0)
                // Not int
                return TYPE_NOT_MATCH;
            break;

        case TYPE_DOUBLE:
            if(get<double>(&value) == 0)
                // Not double
                return TYPE_NOT_MATCH;
            break;

//        case TYPE_FLOAT:
//            if(get<float>(&value) == 0)
//                // Not float
//                return TYPE_NOT_MATCH;
//            break;
//
//        case TYPE_STRING:
//            if(get<std::string>(&value) == 0)
//                // Not string
//                return TYPE_NOT_MATCH;
//            break;

        default:
            return TYPE_NOT_SUPPORT;
    }
    return TYPE_MATCH;
}

complex *VariableBlock::getValuePtr() {
    return nullptr;
}

bool VariableBlock::isConstFlag() const {
    return false;
}

void VariableBlock::setConstFlag(bool constFlag) {

}

VariableBlock::VariableBlock(int type, bool constFlag) {
    type = type;
    constFlag = constFlag;
}

int VariableBlock::modifyValue(complex value) {
    int result = typeCheck(value);
    if(result == TYPE_MATCH)
        this->value = value;
    return result;
}

int VariableBlock::getType() {
    return type;
}


