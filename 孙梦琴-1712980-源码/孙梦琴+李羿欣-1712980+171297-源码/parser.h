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

	Parser(gramTree*);	//���캯��
	~Parser();	//��������

private:
	map<string, funcNode> funcPool;			//������
	vector<Block> blockStack;				//ά����ջ
	InnerCode innerCode;					//�м�������ɹ���
	//set<string> build_in_function;

	struct gramTree* root;

	void parserInit();
	void parserGramTree(struct gramTree* node);

	
	struct gramTree* parser_declaration(struct gramTree* node);		//����parser_declaration�Ľڵ�
	void parser_init_declarator_list(string, struct gramTree*);
	void parser_init_declarator(string, struct gramTree* );			//����parser_init_declarator�Ľڵ�

	struct gramTree* parser_function_definition(struct gramTree*);
	void parser_parameter_list(struct gramTree*,string,bool);			//��ȡ�����β��б�
	void parser_parameter_declaration(struct gramTree*, string,bool);	//��ȡ���������β�

	struct gramTree* parser_statement(struct gramTree*);

	void parser_expression_statement(struct gramTree*);
	varNode parser_expression(struct gramTree*);

	void parser_argument_expression_list(struct gramTree*,string);

	void parser_jump_statement(struct gramTree*);
	void parser_compound_statement(struct gramTree*);
	void parser_selection_statement(struct gramTree*);
	void parser_iteration_statement(struct gramTree*);

	varNode parser_assignment_expression(struct gramTree*);			//��ֵ���ʽ
	varNode parser_logical_or_expression(struct gramTree*);			//�߼�����ʽ
	varNode parser_logical_and_expression(struct gramTree*);		//�߼�����ʽ
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


	string lookupVar(string name);			//���ر������ͣ��Ҳ�������""
	bool lookupCurruntVar(string name);		//���ҵ�ǰ���var
	struct varNode lookupNode(string name);	//���ر����ڵ�
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