all: \
	Sum4 \
	3Sum_Closest \
	Roman_to_Integer \
	Integer_to_Roman \
	Container_With_Most_Water \
	Regular_Expression_Matching \
	Palindrome_Number \
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
	test_Sum4 \
	test_3Sum_Closest \
	test_Roman_to_Integer \
	test_Integer_to_Roman \
	test_Container_With_Most_Water \
	test_Regular_Expression_Matching \
	test_Palindrome_Number \
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

Palindrome_Number: Palindrome_Number_TEST.cpp Palindrome_Number.cpp M_Obj_Dir
	g++ -g Palindrome_Number_TEST.cpp -o obj/Palindrome_Number -lcppunit
test_Palindrome_Number: Palindrome_Number
	obj/Palindrome_Number

Regular_Expression_Matching: Regular_Expression_Matching_TEST.cpp Regular_Expression_Matching.cpp M_Obj_Dir
	g++ -g Regular_Expression_Matching_TEST.cpp -o obj/Regular_Expression_Matching -lcppunit
test_Regular_Expression_Matching: Regular_Expression_Matching
	obj/Regular_Expression_Matching

<<<<<<< HEAD
3Sum_Closest: 3Sum_Closest_TEST.cpp 3Sum_Closest.cpp M_Obj_Dir
	g++ -g 3Sum_Closest_TEST.cpp -o obj/3Sum_Closest -lcppunit
test_3Sum_Closest: 3Sum_Closest
	obj/3Sum_Closest

Sum4: Sum4_TEST.cpp Sum4.cpp M_Obj_Dir
	g++ -g Sum4_TEST.cpp -o obj/Sum4 -lcppunit
test_Sum4: Sum4
	obj/Sum4
=======
Container_With_Most_Water: Container_With_Most_Water_TEST.cpp Container_With_Most_Water.cpp M_Obj_Dir
	g++ -g Container_With_Most_Water_TEST.cpp -o obj/Container_With_Most_Water -lcppunit
test_Container_With_Most_Water: Container_With_Most_Water
	obj/Container_With_Most_Water

Integer_to_Roman: Integer_to_Roman_TEST.cpp Integer_to_Roman.cpp M_Obj_Dir
	g++ -g Integer_to_Roman_TEST.cpp -o obj/Integer_to_Roman -lcppunit
test_Integer_to_Roman: Integer_to_Roman
	obj/Integer_to_Roman

Roman_to_Integer: Roman_to_Integer_TEST.cpp Roman_to_Integer.cpp M_Obj_Dir
	g++ -g Roman_to_Integer_TEST.cpp -o obj/Roman_to_Integer -lcppunit
test_Roman_to_Integer: Roman_to_Integer
	obj/Roman_to_Integer
>>>>>>> 118ef54f484d0b5002846481771c6e7caa1d8e9b

