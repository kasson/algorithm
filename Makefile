
all : Main.o binary_search.o 
	gcc -o  algrithm Main.o binary_search.o

binary_search.o : binary_search.c
	gcc -c -g binary_search.c

Main.o : Main.c main.h
	gcc -c -g  Main.c


.PHNOY : clean
clean:
	rm -f *.o algrithm
