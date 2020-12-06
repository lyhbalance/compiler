* Yacc Branch
```shell
yacc grammer.y
gcc y.tab.c
./a.out
```

```
cd yacc
flex syntax.l
bison -o y.tab.c compiler.y
bison -o y.tab.h compiler.y -d
g++ -std=c++11 -o compiler tree.cpp lex.yy.c y.tab.c
./compiler test.c
```

```
';' ',' ':' '=' '[' ']' '.' '&' '!' '~' '-' '+' '*' '/' '%' '<' '>' '^' '|' '?' '{' '}' '(' ')'
TRUE FALSE
IF ELSE WHILE DO FOR CONTINUE BREAK RETURN
CHAR INT DOUBLE VOID BOOL

SUB_ASSIGN ADD_ASSIGN DIV_ASSIGN MUL_ASSIGN
-= += /= *=

AND_OP OR_OP INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
&& || ++ -- <= >= == !=

CONSTANT_INT CONSTANT_DOUBLE IDENTIFIER
```