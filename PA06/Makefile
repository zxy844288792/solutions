GCC = gcc
CFLAGS = -g -Wall -Wshadow

pa06: pa06.o answer06.o
	$(GCC) $(CFLAGS) pa06.o answer06.o -o pa06

pa06.o: pa06.c pa06.h
	$(GCC) $(CFLAGS) -c pa06.c 

answer06.o: answer06.c pa06.h
	$(GCC) $(CFLAGS) -c answer06.c

test: test1 test2 test3 test4 test5

test1: pa06
	./pa06 images/01-unnormalized-smile.ee264 outputs/output1
	diff outputs/output1 expected/01-smile.ppm
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrindlog1 ./pa06 images/01-unnormalized-smile.ee264 outputs/output1

test2: pa06
	./pa06 images/02-unnormalized-cat-chess.ee264 outputs/output2
	diff outputs/output2 expected/02-cat-chess.ppm
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrindlog1 ./pa06 images/02-unnormalized-cat-chess.ee264 outputs/output2

test3: pa06
	./pa06 images/03-unnormalized-hawkes-bay-NZ.ee264 outputs/output3
	diff outputs/output3 expected/03-hawkes-bay-NZ.ppm
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrindlog1 ./pa06 images/03-unnormalized-hawkes-bay-NZ.ee264 outputs/output3

test4: pa06
	./pa06 images/04-unnormalized-nelsonmandela.ee264 outputs/output4
	diff outputs/output4 expected/04-nelsonmandela.ppm
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrindlog1 ./pa06 images/04-unnormalized-nelsonmandela.ee264 outputs/output4

test5: pa06
	./pa06 images/05-unnormalized-segan-stamp.ee264 outputs/output5
	diff -w outputs/output5 expected/05-segan-stamp.ppm
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrindlog1 ./pa06 images/05-unnormalized-segan-stamp.ee264 outputs/output5
