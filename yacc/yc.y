%{
#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"

using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);
%}

%union{
	struct gramTree* gt;
}

%token <gt> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF CONSTANT_INT CONSTANT_DOUBLE
%token <gt> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <gt> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <gt> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <gt> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token <gt> CHAR INT DOUBLE VOID BOOL

%token <gt> CASE IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token <gt> TRUE FALSE

%token <gt> ';' ',' ':' '=' '[' ']' '.' '&' '!' '~' '-' '+' '*' '/' '%' '<' '>' '^' '|' '?' '{' '}' '(' ')'

%type <gt> primary_expression postfix_expression argument_expression_list unary_expression unary_operator
%type <gt> multiplicative_expression additive_expression shift_expression relational_expression equality_expression
%type <gt> and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression
%type <gt> assignment_expression assignment_operator expression

%type <gt> declaration init_declarator_list init_declarator type_specifier

%type <gt> declarator

%type <gt> parameter_list parameter_declaration identifier_list
%type <gt> abstract_declarator initializer initializer_list designation designator_list
%type <gt> designator statement labeled_statement compound_statement block_item_list block_item expression_statement
%type <gt> selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition
%type <gt> declaration_list



%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
Program:
	translation_unit {
		root = create_tree("Program",1,$1);
	}
	;

translation_unit:
	external_declaration {
		$$ = create_tree("translation_unit",1,$1);
	}
	| translation_unit external_declaration {
		$$ = create_tree("translation_unit",2,$1,$2);
	}
	;

external_declaration:
	function_definition {
		$$ = create_tree("external_declaration",1,$1);
		//函数定义
		//printf("function_definition");
	}
	| declaration {
		$$ = create_tree("external_declaration",1,$1);
		//变量声明
		//printf("declaration");
	}
	;

function_definition:
	type_specifier declarator declaration_list compound_statement {
		$$ = create_tree("function_definition",4,$1,$2,$3,$4);
	}
	| type_specifier declarator compound_statement {
		$$ = create_tree("function_definition",3,$1,$2,$3);
	}
	;

/*类型说明符*/
type_specifier:
	VOID {
		$$ = create_tree("type_specifier",1,$1);
	}
	| CHAR {
		$$ = create_tree("type_specifier",1,$1);
	}
	| INT {
		$$ = create_tree("type_specifier",1,$1);
	}
	| DOUBLE {
		$$ = create_tree("type_specifier",1,$1);
	}
	| BOOL {
		$$ = create_tree("type_specifier",1,$1);
	}
	;

declarator:
	IDENTIFIER {
		//变量
		$$ = create_tree("declarator",1,$1);
	}
	| '(' declarator ')' {
		//.....
		$$ = create_tree("declarator",3,$1,$2,$3);
	}
	| declarator '[' assignment_expression ']' {
		//数组
		//printf("assignment_expression");
		$$ = create_tree("declarator",4,$1,$2,$3,$4);
	}
	| declarator '[' '*' ']' {
		//....
		$$ = create_tree("declarator",4,$1,$2,$3,$4);
	}
	| declarator '[' ']' {
		//数组
		$$ = create_tree("declarator",3,$1,$2,$3);
	}
	| declarator '(' parameter_list ')' {
		//函数
		$$ = create_tree("declarator",4,$1,$2,$3,$4);
	}
	| declarator '(' identifier_list ')' {
		//函数
		$$ = create_tree("declarator",4,$1,$2,$3,$4);
	}
	| declarator '(' ')' {
		//函数
		$$ = create_tree("declarator",3,$1,$2,$3);
	}
	;

declaration_list:
	type_specifier ';' {
		$$ = create_tree("declaration_list",1,$1);
	}
    | type_specifier init_declarator_list ';'{
		$$ = create_tree("declaration_list",3,$1,$2,$3);
	}
	| declaration_list type_specifier ';' {
		$$ = create_tree("declaration_list",3,$1,$2,$3);
	}
    | declaration_list type_specifier init_declarator_list ';'{
		$$ = create_tree("declaration_list",4,$1,$2,$3,$4);
	}
	;

//复合语句
compound_statement:
	'{' '}' {
		$$ = create_tree("compound_statement",2,$1,$2);
	}
	| '{' block_item_list '}' {
		$$ = create_tree("compound_statement",3,$1,$2,$3);
	}
	;
%%