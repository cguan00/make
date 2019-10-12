all: main.o myFunctions.o
	gcc -o program main.o myFunctions.o

main.o: main.c myHeaders.h
	gcc -c main.c

functions.o: myFunctions.c
	gcc -c myFunctions.c
