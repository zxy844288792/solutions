pa06: pa06.o answer06.o
gcc -g pa06.o answer06.o -o pa06
pa06.o: pa06.c pa06.h
gcc -g -Wall -Wshadow -o pa06.o pa06.c
answer06.o: answer06.c pa06.h
gcc -g -Wall -Wshadow -o answer06.o answer06.c
test:pa06

# ./pa06 I images/corrupt-testcases/bad-comment-len
# ./pa06 I images/corrupt-testcases/big-width-height
# ./pa06 I images/corrupt-testcases/check-magic-bits
# ./pa06 I images/corrupt-testcases/comment-has-no-null-byte
# ./pa06 I images/corrupt-testcases/height0
# ./pa06 I images/corrupt-testcases/height-wrong
# ./pa06 I images/corrupt-testcases/incomplete-header
# ./pa06 I images/corrupt-testcases/incomplete-image
# ./pa06 I images/corrupt-testcases/width0

./pa06 I images/01-unnormalized-smile outputs/output1
# diff -w outputs/output1 expected/01-smile
./pa06 I images/02-unnormalized-cat-chess > outputs/output2
# diff -w outputs/output2 expected/02-cat-chess
./pa06 I images/03-unnormalized-hawkes-bay-NZ > outputs/output3
# diff -w outputs/output3 expected/03-hawkes-bay-NZ
./pa06 I images/04-unnormalized-nelsonmandela > outputs/output4
# diff -w outputs/output4 expected/04-nelsonmandela
./pa06 I images/05-unnormalized-sagan-stamp > outputs/output5
# diff -w outputs/output5 expected/05-sagan-stamp
clean:
rm -f pa06*.o
