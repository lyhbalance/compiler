//
// Created by zpt1813061 on 2020/11/19.
//
// z.note2

#include "TableNode.h"

int *TableNode::isHave(string id) {
    if (charTable.find(id) != charTable.end()) {
        return &charTable[id];
    } else if (fatherNode != nullptr) {
        int *temP = fatherNode->isHave(id);
        return temP;
    } else
        return nullptr;
}

void TableNode::addFather(TableNode *father) {
    fatherNode = father;
}

TableNode *TableNode::addChild() {
    TableNode *childNode = new TableNode();
    childNode->addFather(this);
    return childNode;
}

TableNode *TableNode::deleteSelf() {
    TableNode *father = fatherNode;
    delete this;
    return father;
}

int *TableNode::addChar(string id) {
    // This charTable not contain this variables
    if (charTable.find(id) != charTable.end())
        return nullptr;
    charTable[id] = 0;
    return &charTable[id];
}

int *TableNode::modifyValue(string id, int value) {
    int *temp = isHave(id);
    if (temp == nullptr)
        // Not Define Yet
        return nullptr;
    else
        *temp = value;
    return temp;
}
