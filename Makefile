
CC = gcc
CFLAGS = -std=gnu11 -Wall -DINFO
INC =
LIB =

main: main.o sort.o stack.o
	${CC} main.o sort.o stack.o ${CFLAGS} ${INC} ${LIB} -o tiny

main.o: main.c
	${CC} main.c ${CFLAGS} ${INC} ${LIB} -c

sort.o: sort.c
	${CC} sort.c ${CFLAGS} ${INC} ${LIB} -c

stack.o: stack.c
	${CC} stack.c ${CFLAGS} ${INC} ${LIB} -c

clean:
	@rm -rf *.o tiny
