# My first make file

all: main.o Function_1.o
	gcc -o Binary main.o Function_1.o

main.o: main.c
	gcc -c main.c -I ./

Function_1.o: Function_1.c
	gcc -c Function_1.c -I ./

clean:
	rm -rf *.o
	rm -rf Binary