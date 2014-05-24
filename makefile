all: \
	Longest_Palindromic_Substring \
	Two_Sum \
	Median \
	Substring \
	Add

test: \
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


