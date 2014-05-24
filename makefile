all: \
	Minimum_Path_Sum \
	String_to_Integer \
	Reverse_Integer \
	ZigZag_Conversion \
	Longest_Palindromic_Substring \
	Two_Sum \
	Median \
	Substring \
	Add

test: \
	test_Minimum_Path_Sum \
	test_String_to_Integer \
	test_Reverse_Integer \
	test_ZigZag_Conversion \
	test_Longest_Palindromic_Substring \
	test_two_sum \
	test_median \
	test_substring \
	test_add 

M_Obj_Dir:
	mkdir -p obj

Two_Sum: Two_Sum.cpp Test_Two_Sum.cpp M_Obj_Dir
	g++ -g  Test_Two_Sum.cpp -o obj/Two_Sum -lcppunit
test_two_sum: Two_Sum
	obj/Two_Sum

Median: Median_of_Two_Sorted_Arrays_TEST.cpp Median_of_Two_Sorted_Arrays.cpp M_Obj_Dir
	g++ -g Median_of_Two_Sorted_Arrays_TEST.cpp -o obj/Median -lcppunit
test_median: Median
	obj/Median

Substring: Longest_Substring_TEST.cpp Longest_Substring.cpp M_Obj_Dir
	g++ -g Longest_Substring_TEST.cpp -o obj/Substring -lcppunit
test_substring: Substring
	obj/Substring

Add: Add_Two_Numbers_TEST.cpp Add_Two_Numbers.cpp M_Obj_Dir
	g++ -g Add_Two_Numbers_TEST.cpp -o obj/Add -lcppunit
test_add: Add
	obj/Add

Longest_Palindromic_Substring: Longest_Palindromic_Substring_TEST.cpp Longest_Palindromic_Substring.cpp M_Obj_Dir
	g++ -g Longest_Palindromic_Substring_TEST.cpp -o obj/Longest_Palindromic_Substring -lcppunit
test_Longest_Palindromic_Substring: Longest_Palindromic_Substring
	obj/Longest_Palindromic_Substring


ZigZag_Conversion: ZigZag_Conversion_TEST.cpp ZigZag_Conversion.cpp M_Obj_Dir
	g++ -g ZigZag_Conversion_TEST.cpp -o obj/ZigZag_Conversion -lcppunit
test_ZigZag_Conversion: ZigZag_Conversion
	obj/ZigZag_Conversion

Reverse_Integer: Reverse_Integer_TEST.cpp Reverse_Integer.cpp M_Obj_Dir
	g++ -g Reverse_Integer_TEST.cpp -o obj/Reverse_Integer -lcppunit
test_Reverse_Integer: Reverse_Integer
	obj/Reverse_Integer

String_to_Integer: String_to_Integer_TEST.cpp String_to_Integer.cpp M_Obj_Dir
	g++ -g String_to_Integer_TEST.cpp -o obj/String_to_Integer -lcppunit
test_String_to_Integer: String_to_Integer
	obj/String_to_Integer

Minimum_Path_Sum: Minimum_Path_Sum_TEST.cpp Minimum_Path_Sum.cpp M_Obj_Dir
	g++ -g Minimum_Path_Sum_TEST.cpp -o obj/Minimum_Path_Sum -lcppunit
test_Minimum_Path_Sum: Minimum_Path_Sum
	obj/Minimum_Path_Sum

