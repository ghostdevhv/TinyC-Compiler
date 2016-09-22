a.out: main.o libass2_13CS30015.a
	cc main.o -L. -lass2_13CS30015

main.o:	main.c myl.h
	cc -Wall -c main.c

libass2_13CS30015.a:	Ass2_13CS30015.o
		ar -rcs libass2_13CS30015.a Ass2_13CS30015.o

Ass2_13CS30015.o:	Ass2_13CS30015.c myl.h
	cc -Wall -c Ass2_13CS30015.c

clean:
	rm Ass2_13CS30015.o main.o a.out
