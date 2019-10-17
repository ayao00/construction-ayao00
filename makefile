all:	functconst.o construction.o
	gcc -o program functconst.o construction.o

functions.o: functconst.c functconst.h
	gcc -c functconst.c

construction.o: construction.c functconst.h
	gcc -c construction.c

run:
	./program

clean:
	rm *.o
	rm *~
