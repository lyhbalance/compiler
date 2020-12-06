
/* 把注释去掉 */
%{
#include <iostream>
#include <stdio.h>
#include "../source/StaticFlags.h"
using namespace std;
#include "../source/TableNode.h"
auto* globalPtr = new TableNode();
// Old Chen
enum {
    USELESSSSSS,
    ID,
    NUMBER,
    RELOP,
    NEWLINE,
    ERRORCHAR,
    MAIN,
    // Type check
    TYPE_NOT_MATCH,
    TYPE_NOT_SUPPORT,
    TYPE_MATCH,

    //y.txt
    IF,
    ELSE,
    WHILE,
    DO,
    FOR,
    CONTINUE,
    BREAK,
    RETURN,
    CHAR,
    INT,
    DOUBLE,
    VOID,
    BOOL,
    SUB_ASSIGN,
    ADD_ASSIGN,
    DIV_ASSIGN,
    MUL_ASSIGN,
    AND_OP,
    OR_OP,
    INC_OP,
    DEC_OP,
    LE_OP,
    GE_OP,
    EQ_OP,
    NE_OP,
    CONST,
    CONSTANT_INT,
    CONSTANT_DOUBLE,

    IDENTIFIER,



    //USELESS  12.03  to the end
    ADD,
    DEC,
    MUL,
    DIV,
    //bool < > <= >= == !=
    LET,
    MOT,
    LEET,
    MOET,
    EQU,
    NEQU,
    AND,
    OR,
    MOD,
    MI,
    LP,
    RP,
    LSPACE,
    RSPACE,
    SEMICOLON,
    COMMA,
    POINT,
    TRUE,
    FALSE,
    TYPE,
    ASSGIN,
};

%}


delim		[ \t \n]
ws			{delim}+
letter	    [A-Za-z_]
type        int
head_file   #include
digit		[0-9]
id			{letter}({letter}|{digit})*
number	    {digit}+(\.{digit}+)?(E[+-]?{digit}+)?

/* 状态（或条件）定义可以定义在这里
 * INITIAL是一个默认的状态，不需要定义
 */
%s COMMENT
%s COMMENT2
%s HEAD_FILE
%%<INITIAL>"/*"			  {BEGIN COMMENT;}
<COMMENT>"*/"			  {BEGIN INITIAL;}
<COMMENT>.|\n			  {;}
<INITIAL>"//"			  {BEGIN COMMENT2;}
<COMMENT2>\n			  {BEGIN INITIAL;}
<COMMENT2>.				  {;}
<INITIAL>{ws}	          {;}
<INITIAL>void             {return (VOID);}
<INITIAL>{type}            {return (TYPE);}
<INITIAL>while              {    return (WHILE);}
<INITIAL>for                {   return (FOR);}
<INITIAL>do		          {return (DO);}
<INITIAL>if		          {return (IF);}
<INITIAL>else		          {return (ELSE);}
<INITIAL>main             {return (MAIN);}
<INITIAL>return             {return (RETURN);}

<INITIAL>{id}	          {return (ID);}
<INITIAL>{number}	      {return (NUMBER);}
<INITIAL>"<"	          {return (LET);}
<INITIAL>"<="	          {return (LEET);}
<INITIAL>"="	          {return (ASSGIN);}
<INITIAL>">"	          {return (MOT);}
<INITIAL>">="	          {return (MOET);}
<INITIAL>"=="               {return (EQU);}
<INITIAL>"!="	          {return (NEQU);}
<INITIAL>"("	          {return (LP);}
<INITIAL>")"	          {return (RP);}
<INITIAL>"{"	          {return (LSPACE);}
<INITIAL>"}"	          {return (RSPACE);}
<INITIAL>"+"	          {return (ADD);}
<INITIAL>"-"	          {return (DEC);}
<INITIAL>"*"	          {return (MUL);}
<INITIAL>"/"	          {return (DIV);}
<INITIAL>";"	          {return (SEMICOLON);}
<INITIAL>"\."             {return (POINT);}
<INITIAL>.							{return ERRORCHAR;}



%%


int yywrap (){

  return 1;
}

void writeout(int c){
	int* valuePtr;
  switch(c){
	case LSPACE: fprintf(yyout, "LSPACE, \"%s\"\n", yytext);
	globalPtr =globalPtr->addChild();
	break;
    case RSPACE: fprintf(yyout, "LSPACE, \"%s\"\n", yytext);
	globalPtr =globalPtr->deleteSelf();
	break;
  	case ERRORCHAR: fprintf(yyout, "ERRORCHAR, \"%s\"\n", yytext);break;
    case MAIN: fprintf(yyout, "MAIN, \"%s\"\n", yytext);break;
    case RELOP: fprintf(yyout, "RELOP, \"%s\") ", yytext);break;
    case WHILE: fprintf(yyout, "WHILE, \"%s\") ", yytext);
    break;
    case DO: fprintf(yyout, "DO, \"%s\"\n", yytext);break;
    case IF: fprintf(yyout, "IF, \"%s\"\n", yytext);
    break;
    case ELSE: fprintf(yyout, "ELSE, \"%s\"\n", yytext);break;
    case FOR : fprintf(yyout, "for,\"%s\"\n", yytext);
    break;
    case NUMBER: fprintf(yyout, "NUM, \"%s\", %s\n", yytext, yytext);break;
    case ID:
	valuePtr = globalPtr->addChar(string(yytext));
    if(valuePtr == nullptr){
        valuePtr = globalPtr->isHave(string(yytext));
    }
    fprintf(yyout, "ID, \"%s\", %ld\n", yytext, (long int)valuePtr);
	break;
    case NEWLINE: fprintf(yyout, "\n");break;
    case VOID : fprintf(yyout, "VOID,\"%s\"\n", yytext);break;
    case TYPE : fprintf(yyout, "TYPE,\"%s\"\n", yytext);break;
    case LP: fprintf(yyout, "LP,\"%s\"\n",yytext);break;
    case RP: fprintf(yyout, "RP,\"%s\"\n",yytext);break;
    case ASSGIN: fprintf(yyout, "ASSGIN,\"%s\"\n",yytext);break;
    case SEMICOLON: fprintf(yyout, "SEMICOLON,\"%s\"\n",yytext);break;
    case LET: fprintf(yyout, "LET,\"%s\"\n",yytext);break;
    case MOT: fprintf(yyout, "MOT, \"%s\"\n",yytext);break;
    case LEET: fprintf(yyout, "LEET, \"%s\"\n",yytext);break;
    case MOET: fprintf(yyout, "MOET, \"%s\"\n",yytext);break;
    case EQU: fprintf(yyout, "EQU, \"%s\"\n",yytext);break;
    case NEQU: fprintf(yyout, "NEQU, \"%s\"\n",yytext);break;
    case ADD: fprintf(yyout, "ADD, \"%s\"\n",yytext);break;
    case DEC: fprintf(yyout, "DEC, \"%s\"\n",yytext);break;
    case MUL: fprintf(yyout,"MUL, \"%s\"\n",yytext);break;
    case DIV: fprintf(yyout,"DIV, \"%s\"\n",yytext);break;
    case RETURN: fprintf(yyout,"RETURN, \"%s\"\n",yytext);break;
    case POINT: fprintf(yyout,"POINT, \"%s\"\n",yytext);break;
    default:break;
  }
  return;
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
