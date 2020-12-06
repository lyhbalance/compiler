
/* 把注释去掉 */
%{
#include <stdio.h>
// #include "../source/StaticFlags.h"
// will make error

#include "../source/TableNode.h"
auto* globalPtr = new TableNode();

#include "y.tab.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "../source/tree.h"
#include <iostream>
using namespace std;

void count(void);
int column = 0;
%}

%option yylineno

delim		    [ \t \n]
ws			    {delim}+
letter	        [A-Za-z_]
digit		    [0-9]
FS			    (f|F|l|L)
IS              ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))
const_int       [1-9]{digit}*{IS}?
const_double    {digit}+(\.{digit}+)?(E[+-]?{digit}+)?
id			    {letter}({letter}|{digit})*

/* 状态（或条件）定义可以定义在这里
 * INITIAL是一个默认的状态，不需要定义
 */
%s COMMENT
%s COMMENT2
%%<INITIAL>"/*"			  {BEGIN COMMENT;}
<COMMENT>"*/"			  {BEGIN INITIAL;}
<COMMENT>.|\n			  {;}
<INITIAL>"//"			  {BEGIN COMMENT2;}
<COMMENT2>\n			  {BEGIN INITIAL;}
<COMMENT2>.				  {;}

if		          {count(); yylval.gt =create_tree("IF",0,yylineno); return (IF);}
else		      {count(); yylval.gt =create_tree("ELSE",0,yylineno); return (ELSE);}
while            {count(); yylval.gt =create_tree("WHILE",0,yylineno); return (WHILE);}
do		          {count(); yylval.gt =create_tree("DO",0,yylineno); return (DO);}
for              {count(); yylval.gt =create_tree("FOR",0,yylineno); return (FOR);}
continue         {count(); yylval.gt =create_tree("CONTINUE",0,yylineno); return (CONTINUE);}
break            {count(); yylval.gt =create_tree("BREAK",0,yylineno); return (BREAK);}
return           {count(); yylval.gt =create_tree("RETURN",0,yylineno); return (RETURN);}
char             {count(); yylval.gt =create_tree("CHAR",0,yylineno); return (CHAR);}
int              {count(); yylval.gt =create_tree("INT",0,yylineno); return (INT);}
double           {count(); yylval.gt =create_tree("DOUBLE",0,yylineno); return (DOUBLE);}
void             {count(); yylval.gt =create_tree("VOID",0,yylineno); return (VOID);}
bool             {count(); yylval.gt =create_tree("BOOL",0,yylineno); return (BOOL);}
true             {count(); yylval.gt =create_tree("TRUE",0,yylineno); return (TRUE);}
false            {count(); yylval.gt =create_tree("FALSE",0,yylineno); return (FALSE);}
{const_int}      {count(); yylval.gt =create_tree("CONSTANT_INT",0,yylineno); return (CONSTANT_INT);}
{const_double}   {count(); yylval.gt =create_tree("CONSTANT_DOUBLE",0,yylineno); return (CONSTANT_DOUBLE);}

{id}	          {count(); yylval.gt =create_tree("IDENTIFIER",0,yylineno); return (IDENTIFIER);}

"-="	        {count(); yylval.gt =create_tree("SUB_ASSIGN",0,yylineno); return (SUB_ASSIGN);}
"+="	        {count(); yylval.gt =create_tree("ADD_ASSIGN",0,yylineno); return (ADD_ASSIGN);}
"/="	        {count(); yylval.gt =create_tree("DIV_ASSIGN",0,yylineno); return (DIV_ASSIGN);}
"*="	        {count(); yylval.gt =create_tree("MUL_ASSIGN",0,yylineno); return (MUL_ASSIGN);}
"&&"	        {count(); yylval.gt =create_tree("AND_OP",0,yylineno); return (AND_OP);}
"||"	        {count(); yylval.gt =create_tree("OR_OP",0,yylineno); return (OR_OP);}
"++"	        {count(); yylval.gt =create_tree("INC_OP",0,yylineno); return (INC_OP);}
"--"	        {count(); yylval.gt =create_tree("DEC_OP",0,yylineno); return (DEC_OP);}
"<="	        {count(); yylval.gt =create_tree("LE_OP",0,yylineno); return (LE_OP);}
">="	        {count(); yylval.gt =create_tree("GE_OP",0,yylineno); return (GE_OP);}
"=="           {count(); yylval.gt =create_tree("EQ_OP",0,yylineno); return (EQ_OP);}
"!="	        {count(); yylval.gt =create_tree("NE_OP",0,yylineno); return (NE_OP);}

";"		{ count(); yylval.gt =create_tree(";",0,yylineno);	return(';'); }
","		{ count(); yylval.gt =create_tree(",",0,yylineno);	return(','); }
":"		{ count(); yylval.gt =create_tree(":",0,yylineno);	return(':'); }
"="		{ count(); yylval.gt =create_tree("=",0,yylineno);	return('='); }
"["		{ count(); yylval.gt =create_tree("[",0,yylineno);	return('['); }
"]"		{ count(); yylval.gt =create_tree("]",0,yylineno);	return(']'); }
"."		{ count(); yylval.gt =create_tree(".",0,yylineno);	return('.'); }
"&"		{ count(); yylval.gt =create_tree("&",0,yylineno);	return('&'); }
"!"		{ count(); yylval.gt =create_tree("!",0,yylineno);	return('!'); }
"~"		{ count(); yylval.gt =create_tree("~",0,yylineno);	return('~'); }
"-"		{ count(); yylval.gt =create_tree("-",0,yylineno);	return('-'); }
"+"		{ count(); yylval.gt =create_tree("+",0,yylineno);	return('+'); }
"*"		{ count(); yylval.gt =create_tree("*",0,yylineno);	return('*'); }
"/"		{ count(); yylval.gt =create_tree("/",0,yylineno);	return('/'); }
"%"		{ count(); yylval.gt =create_tree("%",0,yylineno);	return('%'); }
"<"		{ count(); yylval.gt =create_tree("<",0,yylineno);	return('<'); }
">"		{ count(); yylval.gt =create_tree(">",0,yylineno);	return('>'); }
"^"		{ count(); yylval.gt =create_tree("^",0,yylineno);	return('^'); }
"|"		{ count(); yylval.gt =create_tree("|",0,yylineno);	return('|'); }
"?"		{ count(); yylval.gt =create_tree("?",0,yylineno);	return('?'); }
"{"		{ count(); yylval.gt =create_tree("{",0,yylineno);	return('{'); }
"}"		{ count(); yylval.gt =create_tree("}",0,yylineno);	return('}'); }
"("		{ count(); yylval.gt =create_tree("(",0,yylineno);	return('('); }
")"		{ count(); yylval.gt =create_tree(")",0,yylineno);	return(')'); }
[\t\v\n\f ]		{ count();}


%%
void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 4 - (column % 4);
		else
			column++;
	ECHO;
}

int yywrap (){
  return 1;
}