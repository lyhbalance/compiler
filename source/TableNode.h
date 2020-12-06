//
// Created by zpt1813061 on 2020/11/19.
//

#ifndef LEXICALANALYSIS1_0_TABLENODE_H
#define LEXICALANALYSIS1_0_TABLENODE_H

#include <map>
#include <vector>
#include <string>
//#include "VariableBlock.h"

using namespace std;

class TableNode {
    map<string, int> charTable;
    TableNode *fatherNode = nullptr;

public:
    int *isHave(string id);

    int *addChar(string id);

    void addFather(TableNode *father);

    TableNode *addChild();

    TableNode *deleteSelf();

    int *modifyValue(string id, int value);
};


#endif //LEXICALANALYSIS1_0_TABLENODE_H
