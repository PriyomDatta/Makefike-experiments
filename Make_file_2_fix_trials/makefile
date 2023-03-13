#My second make file

all: Fun_1.o Fun_2.o main.o
	gcc -o Final Fun_1.o Fun_2.o main.o

main.o: main.c
	gcc -c main.c -I ./

Fun_1.o: Fun_1.c
	gcc -c Fun_1.c -I ./

Fun_2.o: Fun_2.c
	gcc -c Fun_2.c -I ./

clear:
	rm -rf *.o
	rm rf Final