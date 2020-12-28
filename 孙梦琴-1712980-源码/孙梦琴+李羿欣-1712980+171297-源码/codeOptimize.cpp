//代码优化
#include <iostream>
#include "codeOptimize.h"
#include <set>
using namespace std;

Optimize::Optimize(vector<string> codelist) {
	establishMap(codelist);
	dropTrumpTemp(codelist);
}
vector<string> Optimize::getCodeList() {//返回优化后的list
	return this->codelist;
}

void Optimize::dropTrumpTemp(vector<string>& codelist){		//除去无用的临时变量
	set<int> lines;
	//auto设置自动变量，默认为Int型
	//获取tempMessage元素的地址
	for (auto p = tempMessage.begin(); p != tempMessage.end(); p++) {
		//cout << p->first << " " << p->second.num << endl;
		if (p->second.num == 1) {//不存在函数调用
			int line = p->second.line;
			lines.insert(line);
		}
	}
	
	for (int i = 0; i < codelist.size(); i++) {
		if (lines.find(i) == lines.end()) {//将存在函数调用的temp，放在set的尾部
			this->codelist.push_back(codelist[i]);
			//将元素放在末尾
		}
	}
}

void Optimize::Optimize::establishMap(vector<string>& codelist){//建立temp和次数，行数的map
	for (int i = 0; i < codelist.size(); i++) {
		string str = codelist[i];
		int begin = 0;
		int w = str.find("temp", begin);
		while (w != string::npos) {//寻找temp
			//string::npos 查找不匹配
			int end = str.find(" ", w);
			string name = str.substr(w, end - w);
			if (tempMessage.find(name) != tempMessage.end()) {//tempMessage中已存在该变量，更新num值
				if (str.find("CALL") != string::npos)//存在函数调用
					tempMessage[name].num += 1000;
				tempMessage[name].num++;
			}
			else {//新变量，将该变量插入tempMessage
				Message m;
				m.line = i;
				m.num = 1;
				if (str.find("CALL") != string::npos)//存在函数调用
					m.num += 1000;
				tempMessage.insert({ name,m });
			}
			begin = end;
			w = str.find("temp", begin);
		}
	}
}
	










