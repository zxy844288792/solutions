GCC = gcc
CFLAGS = -g -Wall -Wshadow

pa10: pa10.o answer10.o
	$(GCC) $(CFLAGS) pa10.o answer10.o -o pa10

pa10.o: pa10.c pa10.h
	$(GCC) $(CFLAGS) -c pa10.c 

answer10.o: answer10.c pa10.h
	$(GCC) $(CFLAGS) -c answer10.c

testall: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 test14 test15 test16 test17 test18 test19 test20 test21 test22 test23 test24 test25 test26 test27 test28 test29 test30

test1:  pa10
	./pa10 shapes 1 > outputs/output1
	 valgrind --leak-check=full ./pa10 shapes 1 > outputs/output1
	diff -w outputs/output1 expected/shapes-1

test2:  pa10
	 ./pa10 shapes 2 > outputs/output2
	valgrind --leak-check=full ./pa10 shapes 2 > outputs/output2
	diff -w outputs/output2 expected/shapes-2

test3:  pa10
	./pa10 shapes 3 > outputs/output3
	valgrind --leak-check=full ./pa10 shapes 3 > outputs/output3
	diff -w outputs/output3 expected/shapes-3

test4:  pa10       
	 ./pa10 shapes 4 > outputs/output4
	valgrind --leak-check=full ./pa10 shapes 4 > outputs/output4
	diff -w outputs/output4 expected/shapes-4

test5:  pa10
	./pa10 shapes 5 > outputs/output5
	valgrind --leak-check=full ./pa10 shapes 5 > outputs/output5
	diff -w outputs/output5 expected/shapes-5

test6:  pa10
	./pa10 shapes 6 > outputs/output6
	valgrind --leak-check=full ./pa10 shapes 6 > outputs/output6
	diff -w outputs/output6 expected/shapes-6

test7:  pa10
	./pa10 shapes 7 > outputs/output7
	valgrind --leak-check=full ./pa10 shapes 7 > outputs/output7
	diff -w outputs/output7 expected/shapes-7

test8:  pa10
	./pa10 shapes 8 > outputs/output8
	valgrind --leak-check=full ./pa10 shapes 8 > outputs/output8
	diff -w outputs/output8 expected/shapes-8

test9:  pa10
	./pa10 shapes 9 > outputs/output9
	valgrind --leak-check=full ./pa10 shapes 9 > outputs/output9
	diff -w outputs/output9 expected/shapes-9

test10:  pa10
	./pa10 sort 1 > outputs/output10
	valgrind --leak-check=full ./pa10 sort 1 > outputs/output10
#	diff -w outputs/output10 expected/stack-sortable-1

test11:  pa10
	./pa10 sort 12 > outputs/output11
	valgrind --leak-check=full ./pa10 sort 12 > outputs/output11
#        diff -w outputs/output11 expected/stack-sortable-2

test12:  pa10
	./pa10 sort 123 > outputs/output12
	valgrind --leak-check=full ./pa10 sort 123 > outputs/output12
#        diff -w outputs/output12 expected/stack-sortable-3

test13:  pa10
	./pa10 sort 1234 > outputs/output13
	valgrind --leak-check=full ./pa10 sort 1234 > outputs/output13
#        diff -w outputs/output13 expected/stack-sortable-4

test14:  pa10
	./pa10 sort 12345 > outputs/output14
	valgrind --leak-check=full ./pa10 sort 12345 > outputs/output14
#        diff -w outputs/output14 expected/stack-sortable-5

test15:  pa10
	./pa10 sort 123456 > outputs/output15
	valgrind --leak-check=full ./pa10 sort 123456 > outputs/output15
#        diff -w outputs/output15 expected/stack-sortable-6

test16:  pa10
	./pa10 sort 1234567 > outputs/output16
	valgrind --leak-check=full ./pa10 sort 1234567 > outputs/output16
#        diff -w outputs/output16 expected/stack-sortable-7

test17:  pa10
	./pa10 sort 12345678 > outputs/output17
	valgrind --leak-check=full ./pa10 sort 12345678 > outputs/output17
#        diff -w outputs/output17 expected/stack-sortable-8

test18:  pa10
	./pa10 sort 123456789 > outputs/output18
	valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18
#        diff -w outputs/output18 expected/stack-sortable-9

test19:  pa10
	./pa10 sort 143256 > outputs/output18
	valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18

test20:  pa10
	./pa10 sort 615324 > outputs/output18
	valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18

test21:  pa10
	./pa10 sort 2346789 > outputs/output18
	valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18


test22:  pa10
	./pa10 inputs/input19 outputs/output19
	valgrind --leak-check=full ./pa10 inputs/input19 outputs/output19
	diff -w outputs/output19 expected/stack-unsortable-1

test23:  pa10
	./pa10 inputs/input20 outputs/output20
	valgrind --leak-check=full ./pa10 inputs/input20 outputs/output20
	diff -w outputs/output20 expected/stack-unsortable-2

test24:  pa10
	./pa10 inputs/input21 outputs/output21
	valgrind --leak-check=full ./pa10 inputs/input21 outputs/output21
	diff -w outputs/output21 expected/stack-unsortable-3

test25:  pa10
	./pa10 inputs/input22 outputs/output22
	valgrind --leak-check=full ./pa10 inputs/input22 outputs/output22
	diff -w outputs/output22 expected/stack-unsortable-4

test26:  pa10
	./pa10 inputs/input23 outputs/output23
	valgrind --leak-check=full ./pa10 inputs/input23 outputs/output23
	diff -w outputs/output23 expected/stack-unsortable-5

test27:  pa10
	./pa10 inputs/input24 outputs/output24
	valgrind --leak-check=full ./pa10 inputs/input24 outputs/output24
	diff -w outputs/output24 expected/stack-unsortable-6

test28:  pa10
	./pa10 inputs/input25 outputs/output25
	valgrind --leak-check=full ./pa10 inputs/input25 outputs/output25
	diff -w outputs/output25 expected/stack-unsortable-7

test29:  pa10
	./pa10 inputs/input26 outputs/output26
	valgrind --leak-check=full ./pa10 inputs/input26 outputs/output26
	diff -w outputs/output26 expected/stack-unsortable-8

test30:  pa10
	./pa10 inputs/input27 outputs/output27
	valgrind --leak-check=full ./pa10 inputs/input27 outputs/output27
	diff -w outputs/output27 expected/stack-unsortable-9

clean:
	rm -f pa10*.o
