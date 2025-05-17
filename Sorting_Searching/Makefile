.PHONY=all clean

CC=gcc

SRCS:=$(wildcard *.c)
BINS:=$(SRCS:%.c=%)

all:${BINS}

%:%.o
	${CC} -o $@ $<

%.o:%.c
	${CC} -c $<
	
clean:
	rm -rf *.o ${BINS}


