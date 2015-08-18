CFLAGS=-Wall -c -g

bst_main: bst_main.o bst.o
	gcc -o bst_main bst_main.o bst.o

bst_main.o: bst_main.c bst.h
	${CC} ${CFLAGS} bst_main.c bst.h
bst.o: bst.c bst.h
	${CC} ${CFLAGS} bst.c bst.h

clean:
	rm bst_main *.o *.gch *~

