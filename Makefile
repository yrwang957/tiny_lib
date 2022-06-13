
CC = gcc
CFLAGS = -std=gnu11 -Wall -DINFO
INC =
LIB =

all: main

main: main.o sort.o stack.o linked_list.o sleep.o
	${CC} main.o sort.o stack.o linked_list.o sleep.o ${CFLAGS} ${INC} ${LIB} -o tiny

main.o: main.c
	${CC} main.c ${CFLAGS} ${INC} ${LIB} -c

sort.o: sort.c
	${CC} sort.c ${CFLAGS} ${INC} ${LIB} -c

stack.o: stack.c
	${CC} stack.c ${CFLAGS} ${INC} ${LIB} -c

linked_list.o: linked_list.c
	${CC} linked_list.c ${CFLAGS} ${INC} ${LIB} -c

sleep.o: sleep.c
	${CC} sleep.c ${CFLAGS} ${INC} ${LIB} -c

clean:
	@rm -rf *.o tiny
