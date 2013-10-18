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
	diff outputs/output0 expected/expected0
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog0 ./pa07 inputs/input0_A inputs/input0_B > outputs/output0

test1: pa07
	./pa07 inputs/input1_A inputs/input1_B > outputs/output1
	diff outputs/output1 expected/expected1
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog1 ./pa07 inputs/input1_A inputs/input1_B > outputs/output1

test2: pa07
	./pa07 inputs/input2_A inputs/input2_B > outputs/output2
	diff outputs/output2 expected/expected2
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog2 ./pa07 inputs/input2_A inputs/input2_B > outputs/output2

test3: pa07
	./pa07 inputs/input3_A inputs/input3_B > outputs/output3
	diff outputs/output3 expected/expected3
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog3 ./pa07 inputs/input3_A inputs/input3_B > outputs/output3

test4: pa07
	./pa07 inputs/input4_A inputs/input4_B > outputs/output4
	diff outputs/output4 expected/expected4
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog4 ./pa07 inputs/input4_A inputs/input4_B > outputs/output4

test5: pa07
	./pa07 inputs/input5_A inputs/input5_B > outputs/output5
	diff outputs/output5 expected/expected5
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog5 ./pa07 inputs/input5_A inputs/input5_B > outputs/output5

test6: pa07
	./pa07 inputs/input6_A inputs/input6_B > outputs/output6
	diff outputs/output6 expected/expected6
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog6 ./pa07 inputs/input6_A inputs/input6_B > outputs/output6

test7: pa07
	./pa07 inputs/input7_A inputs/input7_B > outputs/output7
	diff outputs/output7 expected/expected7
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog7 ./pa07 inputs/input7_A inputs/input7_B > outputs/output7

test8: pa07
	./pa07 inputs/input8_A inputs/input8_B > outputs/output8
	diff outputs/output8 expected/expected8
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog8 ./pa07 inputs/input8_A inputs/input8_B > outputs/output8

test9: pa07
	./pa07 inputs/input9_A inputs/input9_B > outputs/output9
	diff outputs/output9 expected/expected9
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog9 ./pa07 inputs/input9_A inputs/input9_B > outputs/output9

test10: pa07
	./pa07 inputs/input10_A inputs/input10_B > outputs/output10
	diff outputs/output10 expected/expected10
	valgrind --tool=memcheck --leak-check=full --verbose --log-file=valgrinds/valgrindlog10 ./pa07 inputs/input10_A inputs/input10_B > outputs/output10
