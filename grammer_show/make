flex ../lex/syntax3.l
bison -o y.tab.c ../yacc/compiler.y
bison -o y.tab.h ../yacc/compiler.y -d
g++ -std=c++11 -o compiler ../source/tree.cpp lex.yy.c y.tab.c
./compiler test.c