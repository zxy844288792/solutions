GCC = gcc
CFLAGS = -g -Wall -Wshadow

pa06: pa07.o answer07.o
	$(GCC) $(CFLAGS) pa07.o answer07.o -o pa07

pa06.o: pa07.c pa07.h
	$(GCC) $(CFLAGS) -c pa07.c 

answer06.o: answer07.c pa07.h
	$(GCC) $(CFLAGS) -c answer07.c

testall: test0 test1 test2 test3 test4 test5 test6 test7 test8 test9 test10

test0: pa07 
	./pa07 inputs/input0_A inputs/input0_B > outputs/output0
	valgrinf --tool=memcheck -- leak-check=full ./pa07 inputs/input0_A inputs input0_B
        diff -w outputs/output0 expected/expected0

