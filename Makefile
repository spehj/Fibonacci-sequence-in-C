INCLUDES:=-I "include"
CC:=gcc
LIBS :=
CFLAGS := -g  -Wall
OBJS := main.c src/fibonacci.c

fibonacci: ${OBJ}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}
.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
	
.PHONY: clean

clean:
	rm -r *.o