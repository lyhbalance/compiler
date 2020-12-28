//生成中间代码
#include "innerCode.h"
#include "codeOptimize.h"
#include "tools.h"
#include <fstream>

InnerCode::InnerCode() {

}

void InnerCode::addCode(string str) {
	codeList.push_back(str);
}

void InnerCode::printCode() {//输出优化后代码
	Optimize optimize(codeList);
	codeList = optimize.getCodeList();
	ofstream out("innerCode.txt");

	for (string s : codeList) {
		cout << s << endl;
		out << s << "\n";
	}
}

//计算语句
string InnerCode::createCodeforVar(string tempname, string op, varNode node1, varNode node2) {
	string result = tempname + " := ";
	if (node1.useAddress) {
		result += "*" + node1.name;
	}
	else {
		if (node1.num < 0) {//未赋值语句
			result += node1.name;
		}
		else result += "var" + inttostr(node1.num);
	}
	
	result += " " + op + " ";

	if (node2.useAddress) {
		result += "*" + node2.name;
	}
	else {
		if (node2.num < 0) {//未赋值语句
			result += node2.name;
		}
		else result += "var" + inttostr(node2.num);
	}

	return result;

}

//赋值语句
string InnerCode::createCodeforAssign(varNode node1, varNode node2) {
	string result;
	if (node1.useAddress) {
		result = "*" + node1.name + " := ";
	}
	else {
		result = "var" + inttostr(node1.num);
		result += " := ";
	}

	if (node2.useAddress) {
		result += "*" + node2.name;
	}
	else {
		if (node2.num < 0) {
			result += node2.name;
		}
		else result += "var" + inttostr(node2.num);
	}
	

	return result;
}
//传参语句
string InnerCode::createCodeforParameter(varNode node) {
	string result = "PARAM ";
	result += "var" + inttostr(node.num);
	return result;
}
//return语句
string InnerCode::createCodeforReturn(varNode node) {
	string result = "RETURN ";
	if (node.useAddress) {
		result += "*" + node.name;
	}
	else {
		if (node.num < 0) {
			result += node.name;
		}
		else result += "var" + inttostr(node.num);
	}
	
	return result;
}
//寄存器分配语句
string InnerCode::createCodeforArgument(varNode node) {
	string result = "ARG ";
	if (node.useAddress) {
		result += "*" + node.name;
	} 
	else {
		if (node.num < 0) {
			result += node.name;
		}
		else result += "var" + inttostr(node.num);
	}
	
	return result;
}
//声明变量语句
string InnerCode::getNodeName(varNode node) {
	if (node.useAddress) {
		return "*" + node.name;
	}
	else {
		if (node.num < 0) {
			return node.name;
		}
		else return ("var" + inttostr(node.num));
	}

}
//声明数组语句
string InnerCode::getarrayNodeName(arrayNode node) {
	return ("array" + inttostr(node.num));
}
//声明标签语句
string InnerCode::getLabelName() {
	return "label" + inttostr(labelNum++);
}