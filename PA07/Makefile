GCC = gcc
CFLAGS = -g -Wall -Wshadow

pa06: pa07.o answer07.o
	$(GCC) $(CFLAGS) pa07.o answer07.o -o pa07

pa06.o: pa07.c pa07.h
	$(GCC) $(CFLAGS) -c pa07.c 

answer06.o: answer07.c pa07.h
	$(GCC) $(CFLAGS) -c answer07.c
