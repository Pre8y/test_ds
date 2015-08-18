CFLAGS=-Wall -c -g

liked_list_main : linked_list_main.o linked_list.o
	gcc -o  linked_list_main linked_list_main.o linked_list.o

linked_list_main.o: linked_list_main.c linked_list.h
	${CC} ${CFLAGS} linked_list_main.c linked_list.h

linked_list.o: linked_list.c linked_list.h
	${CC} ${CFLAGS} linked_list.c linked_list.h

clean:
	rm *.o *.gch linked_list_main *~
