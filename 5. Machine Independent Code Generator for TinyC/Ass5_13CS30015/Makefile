all: a.out

a.out: lex.yy.c y.tab.c y.tab.h ass5_13CS30015_translator.h ass5_13CS30015_translator.cxx
	g++ lex.yy.c y.tab.c ass5_13CS30015_translator.cxx -lfl

lex.yy.c: ass5_13CS30015.l
	flex ass5_13CS30015.l

y.tab.h: ass5_13CS30015.y
	yacc -dtv ass5_13CS30015.y 

y.tab.c: ass5_13CS30015.y
	yacc -dtv -Wconflicts-rr -Wother ass5_13CS30015.y

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output
run: 
	./a.out < ass5_13CS30015_test1.c > ass5_13CS30015_quad1.c
	./a.out < ass5_13CS30015_test2.c > ass5_13CS30015_quad2.c
	./a.out < ass5_13CS30015_test3.c > ass5_13CS30015_quad3.c
	./a.out < ass5_13CS30015_test4.c > ass5_13CS30015_quad4.c
	./a.out < ass5_13CS30015_test5.c > ass5_13CS30015_quad5.c
	./a.out < lul.c > lul1.c
