#ifndef _PARSER_H_
#define _PARSER_H_
#include "block.h"
#include "tree.h"
#include "innerCode.h"
#include <vector>
#include <set>


using namespace std;

class Parser {
public:

	Parser(gramTree*);	//构造函数
	~Parser();	//析构函数

private:
	map<string, funcNode> funcPool;			//函数池
	vector<Block> blockStack;				//维护的栈
	InnerCode innerCode;					//中间代码生成工具
	//set<string> build_in_function;

	struct gramTree* root;

	void parserInit();
	void parserGramTree(struct gramTree* node);

	
	struct gramTree* parser_declaration(struct gramTree* node);		//分析parser_declaration的节点
	void parser_init_declarator_list(string, struct gramTree*);
	void parser_init_declarator(string, struct gramTree* );			//分析parser_init_declarator的节点

	struct gramTree* parser_function_definition(struct gramTree*);
	void parser_parameter_list(struct gramTree*,string,bool);			//获取函数形参列表
	void parser_parameter_declaration(struct gramTree*, string,bool);	//获取函数单个形参

	struct gramTree* parser_statement(struct gramTree*);

	void parser_expression_statement(struct gramTree*);
	varNode parser_expression(struct gramTree*);

	void parser_argument_expression_list(struct gramTree*,string);

	void parser_jump_statement(struct gramTree*);
	void parser_compound_statement(struct gramTree*);
	void parser_selection_statement(struct gramTree*);
	void parser_iteration_statement(struct gramTree*);

	varNode parser_assignment_expression(struct gramTree*);			//赋值表达式
	varNode parser_logical_or_expression(struct gramTree*);			//逻辑或表达式
	varNode parser_logical_and_expression(struct gramTree*);		//逻辑或表达式
	varNode parser_inclusive_or_expression(struct gramTree*);
	varNode parser_exclusive_or_expression(struct gramTree*);
	varNode parser_and_expression(struct gramTree*);
	varNode parser_equality_expression(struct gramTree*);
	varNode parser_relational_expression(struct gramTree*);
	varNode parser_shift_expression(struct gramTree*);
	varNode parser_additive_expression(struct gramTree*);
	varNode parser_multiplicative_expression(struct gramTree*);
	varNode parser_unary_expression(struct gramTree*);
	varNode parser_postfix_expression(struct gramTree*);
	varNode parser_primary_expression(struct gramTree*);


	string lookupVar(string name);			//返回变量类型，找不到返回""
	bool lookupCurruntVar(string name);		//查找当前块的var
	struct varNode lookupNode(string name);	//返回变量节点
	string getFuncRType();
	string getArrayType(string);
	struct arrayNode getArrayNode(string);

	int getBreakBlockNumber();

	struct varNode createTempVar(string name, string type);

	void error(int line, string error);

	void print_map();
	void print_code();
};




#endif // !_PARSER_H_