all: \
	Two_Sum \
	Median \
	Substring

Two_Sum: Two_Sum.cpp Test_Two_Sum.cpp M_Obj_Dir
	g++ -g  Test_Two_Sum.cpp -o obj/Two_Sum -lcppunit

Median: Median_of_Two_Sorted_Arrays_TEST.cpp Median_of_Two_Sorted_Arrays.cpp M_Obj_Dir
	g++ -g Median_of_Two_Sorted_Arrays_TEST.cpp -o obj/Median -lcppunit

Substring: Longest_Substring_TEST.cpp Longest_Substring.cpp M_Obj_Dir
	g++ -g Longest_Substring_TEST.cpp -o obj/Substring -lcppunit

M_Obj_Dir:
	mkdir -p obj
