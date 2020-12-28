//����ṹ��
#ifndef _BLOCK_H_
#define _BLOCK_H_

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "tree.h"
using namespace std;

struct Node{
	string name;
	string type;
	int num = -1;
};

//�����ڵ�
struct varNode :public Node{
	bool useAddress = false;
	string boolString;
};

//�����ڵ�
struct funcNode {
	bool isdefinied = false;
	string name;				//������
	string rtype;				//������������
	vector<Node> paralist;	//��¼�β��б�
	
};

//����ڵ�
struct arrayNode :public Node{
};


//block������
class Block {
public:
	funcNode func;	//����Ǻ�������¼������
	bool isfunc = false;//��¼�Ƿ��Ǻ���
	map<string, struct varNode> varMap;		//������map
	map<string, struct arrayNode> arrayMap;	//�����map
	string breakLabelname;
	bool canBreak = false;
};

#endif 
