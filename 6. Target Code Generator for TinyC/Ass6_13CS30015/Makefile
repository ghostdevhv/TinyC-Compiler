all: a.out

a.out: lex.yy.c y.tab.c y.tab.h ass6_13CS30015_translator.h ass6_13CS30015_translator.cxx
	g++ lex.yy.c y.tab.c ass6_13CS30015_translator.cxx ass6_13CS30015_target_translator.cxx -lfl

lex.yy.c: ass6_13CS30015.l
	flex ass6_13CS30015.l

y.tab.h: ass6_13CS30015.y
	yacc -dtv ass6_13CS30015.y 

y.tab.c: ass6_13CS30015.y
	yacc -dtv -Wconflicts-rr -Wother ass6_13CS30015.y

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output test_outputs/ass6_13CS30015_1.s test_outputs/ass6_13CS30015_2.s test_outputs/ass6_13CS30015_3.s test_outputs/ass6_13CS30015_4.s test_outputs/ass6_13CS30015_5.s 

run1: a.out test_inputs/ass6_13CS30015_test1.c 
	./a.out < test_inputs/ass6_13CS30015_test1.c > test_outputs/ass6_13CS30015_1.s
	gcc test_outputs/ass6_13CS30015_1.s myl.c -o 1.out
	./1.out

run2: a.out test_inputs/ass6_13CS30015_test2.c
	./a.out < test_inputs/ass6_13CS30015_test2.c > test_outputs/ass6_13CS30015_2.s
	gcc test_outputs/ass6_13CS30015_2.s myl.c -o 2.out
	./2.out

run3: a.out test_inputs/ass6_13CS30015_test3.c
	./a.out < test_inputs/ass6_13CS30015_test3.c > test_outputs/ass6_13CS30015_3.s
	gcc test_outputs/ass6_13CS30015_3.s myl.c -o 3.out
	./3.out

run4: a.out test_inputs/ass6_13CS30015_test4.c
	./a.out < test_inputs/ass6_13CS30015_test4.c > test_outputs/ass6_13CS30015_4.s
	gcc test_outputs/ass6_13CS30015_4.s myl.c -o 4.out
	./4.out

run5: a.out test_inputs/ass6_13CS30015_test5.c
	./a.out < test_inputs/ass6_13CS30015_test5.c > test_outputs/ass6_13CS30015_5.s
	gcc test_outputs/ass6_13CS30015_5.s myl.c -o 5.out
	./5.out