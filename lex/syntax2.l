
/* 把注释去掉 */
%{
#include <iostream>
#include <stdio.h>
#include "../source/StaticFlags.h"
using namespace std;
#include "../source/TableNode.h"
auto* globalPtr = new TableNode();
// Old Chen
%}


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

<INITIAL>{ws}	          {;}
<INITIAL>if		          {return (IF);}
<INITIAL>else		      {return (ELSE);}
<INITIAL>while            {return (WHILE);}
<INITIAL>do		          {return (DO);}
<INITIAL>for              {return (FOR);}
<INITIAL>continue         {return (CONTINUE);}
<INITIAL>break            {return (BREAK);}
<INITIAL>return           {return (RETURN);}
<INITIAL>main             {return (MAIN);}
<INITIAL>char             {return (CHAR);}
<INITIAL>int              {return (INT);}
<INITIAL>double           {return (DOUBLE);}
<INITIAL>void             {return (VOID);}
<INITIAL>bool             {return (BOOL);}
<INITIAL>const            {return (CONST);}
<INITIAL>true             {return (TRUE);}
<INITIAL>false            {return (FALSE);}
<INITIAL>{const_int}      {return (CONST_INT);}
<INITIAL>{const_DOUBLE}   {return (CONST_DOUBLE);}

<INITIAL>{id}	          {return (ID);}

<INITIAL>"-="	        {return (SUB_ASSIGN);}
<INITIAL>"+="	        {return (ADD_ASSIGN);}
<INITIAL>"/="	        {return (DIV_ASSIGN);}
<INITIAL>"*="	        {return (MUL_ASSIGN);}
<INITIAL>"&&"	        {return (AND_OP);}
<INITIAL>"||"	        {return (OR_OP);}
<INITIAL>"++"	        {return (INC_OP);}
<INITIAL>"--"	        {return (DEC_OP);}
<INITIAL>"<="	        {return (LE_OP);}
<INITIAL>">="	        {return (GE_OP);}
<INITIAL>"=="           {return (EQ_OP);}
<INITIAL>"!="	        {return (NE_OP);}

<INITIAL>";"	        {return (yytext);}
<INITIAL>","            {return (yytext);}
<INITIAL>":"            {return (yytext);}
<INITIAL>"="	        {return (yytext);}
<INITIAL>"["            {return (yytext);}
<INITIAL>"]"            {return (yytext);}
<INITIAL>"."            {return (yytext);}
<INITIAL>"&"            {return (yytext);}
<INITIAL>"!"            {return (yytext);}
<INITIAL>"~"            {return (yytext);}
<INITIAL>"+"	        {return (yytext);}
<INITIAL>"-"	        {return (yytext);}
<INITIAL>"*"	        {return (yytext);}
<INITIAL>"/"	        {return (yytext);}
<INITIAL>"%"	        {return (yytext);}
<INITIAL>"<"	        {return (yytext);}
<INITIAL>">"	        {return (yytext);}
<INITIAL>"^"	        {return (yytext);}
<INITIAL>"|"	        {return (yytext);}
<INITIAL>"?"	        {return (yytext);}
<INITIAL>"("	        {return (yytext);}
<INITIAL>")"	        {return (yytext);}
<INITIAL>"{"	        {return (yytext);}
<INITIAL>"}"	        {return (yytext);}

<INITIAL>.				  {return ERRORCHAR;}



%%


int yywrap (){

  return 1;
}




int main (int argc, char ** argv){
	int c,j=0;
	if (argc>=2){
	  if ((yyin = fopen(argv[1], "r")) == NULL){
	    printf("Can't open file %s\n", argv[1]);
	    return 1;
	  }
	  if (argc>=3){
	    yyout=fopen(argv[2], "w");
	  }
	}

	while (c = yylex()){
		writeout(c);
	}
	if(argc>=2){
	  fclose(yyin);
	  if (argc>=3) fclose(yyout);
	}
	return 0;
}
