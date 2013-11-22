pa10: pa10.o answer10.o
        gcc -g pa10.o answer10.o -o pa10
pa10.o: pa10.c pa10.h
        gcc -g -Wall -Wshadow -c pa10.c
answer10.o: answer10.c pa10.h
        gcc -g -Wall -Wshadow -c answer10.c

test: pa10

        ./pa10 shapes 1 > outputs/output1
        valgrind --leak-check=full ./pa10 shapes 1 > outputs/output1
        diff -w outputs/output1 expected/shapes-1

        ./pa10 shapes 2 > outputs/output2
        valgrind --leak-check=full ./pa10 shapes 2 > outputs/output2
        diff -w outputs/output2 expected/shapes-2

        ./pa10 shapes 3 > outputs/output3
        valgrind --leak-check=full ./pa10 shapes 3 > outputs/output3
        diff -w outputs/output3 expected/shapes-3

        ./pa10 shapes 4 > outputs/output4
        valgrind --leak-check=full ./pa10 shapes 4 > outputs/output4
        diff -w outputs/output4 expected/shapes-4

        ./pa10 shapes 5 > outputs/output5
        valgrind --leak-check=full ./pa10 shapes 5 > outputs/output5
        diff -w outputs/output5 expected/shapes-5

        ./pa10 shapes 6 > outputs/output6
        valgrind --leak-check=full ./pa10 shapes 6 > outputs/output6
        diff -w outputs/output6 expected/shapes-6

        ./pa10 shapes 7 > outputs/output7
        valgrind --leak-check=full ./pa10 shapes 7 > outputs/output7
        diff -w outputs/output7 expected/shapes-7

        ./pa10 shapes 8 > outputs/output8
        valgrind --leak-check=full ./pa10 shapes 8 > outputs/output8
        diff -w outputs/output8 expected/shapes-8

        ./pa10 shapes 9 > outputs/output9
        valgrind --leak-check=full ./pa10 shapes 9 > outputs/output9
        diff -w outputs/output9 expected/shapes-9


        ./pa10 sort 1 > outputs/output10
        valgrind --leak-check=full ./pa10 sort 1 > outputs/output10
#        diff -w outputs/output10 expected/stack-sortable-1

        ./pa10 sort 12 > outputs/output11
        valgrind --leak-check=full ./pa10 sort 12 > outputs/output11
#        diff -w outputs/output11 expected/stack-sortable-2

        ./pa10 sort 123 > outputs/output12
        valgrind --leak-check=full ./pa10 sort 123 > outputs/output12
#        diff -w outputs/output12 expected/stack-sortable-3

        ./pa10 sort 1234 > outputs/output13
        valgrind --leak-check=full ./pa10 sort 1234 > outputs/output13
#        diff -w outputs/output13 expected/stack-sortable-4

        ./pa10 sort 12345 > outputs/output14
        valgrind --leak-check=full ./pa10 sort 12345 > outputs/output14
#        diff -w outputs/output14 expected/stack-sortable-5

        ./pa10 sort 123456 > outputs/output15
        valgrind --leak-check=full ./pa10 sort 123456 > outputs/output15
#        diff -w outputs/output15 expected/stack-sortable-6

        ./pa10 sort 1234567 > outputs/output16
        valgrind --leak-check=full ./pa10 sort 1234567 > outputs/output16
#        diff -w outputs/output16 expected/stack-sortable-7

        ./pa10 sort 12345678 > outputs/output17
        valgrind --leak-check=full ./pa10 sort 12345678 > outputs/output17
#        diff -w outputs/output17 expected/stack-sortable-8

        ./pa10 sort 123456789 > outputs/output18
        valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18
#        diff -w outputs/output18 expected/stack-sortable-9

        ./pa10 sort 143256 > outputs/output18
        valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18

        ./pa10 sort 615324 > outputs/output18
        valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18

        ./pa10 sort 2346789 > outputs/output18
        valgrind --leak-check=full ./pa10 sort 123456789 > outputs/output18



        ./pa10 inputs/input19 outputs/output19
        valgrind --leak-check=full ./pa10 inputs/input19 outputs/output19
        diff -w outputs/output19 expected/stack-unsortable-1

        ./pa10 inputs/input20 outputs/output20
        valgrind --leak-check=full ./pa10 inputs/input20 outputs/output20
        diff -w outputs/output20 expected/stack-unsortable-2

        ./pa10 inputs/input21 outputs/output21
        valgrind --leak-check=full ./pa10 inputs/input21 outputs/output21
        diff -w outputs/output21 expected/stack-unsortable-3

        ./pa10 inputs/input22 outputs/output22
        valgrind --leak-check=full ./pa10 inputs/input22 outputs/output22
        diff -w outputs/output22 expected/stack-unsortable-4

        ./pa10 inputs/input23 outputs/output23
        valgrind --leak-check=full ./pa10 inputs/input23 outputs/output23
        diff -w outputs/output23 expected/stack-unsortable-5

        ./pa10 inputs/input24 outputs/output24
        valgrind --leak-check=full ./pa10 inputs/input24 outputs/output24
        diff -w outputs/output24 expected/stack-unsortable-6

        ./pa10 inputs/input25 outputs/output25
        valgrind --leak-check=full ./pa10 inputs/input25 outputs/output25
        diff -w outputs/output25 expected/stack-unsortable-7

        ./pa10 inputs/input26 outputs/output26
        valgrind --leak-check=full ./pa10 inputs/input26 outputs/output26
        diff -w outputs/output26 expected/stack-unsortable-8

        ./pa10 inputs/input27 outputs/output27
        valgrind --leak-check=full ./pa10 inputs/input27 outputs/output27
        diff -w outputs/output27 expected/stack-unsortable-9

clean:
        rm -f pa10*.o
