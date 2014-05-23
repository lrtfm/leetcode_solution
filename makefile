all:Two_Sum \
		Median


Two_Sum: Two_Sum.cpp Test_Two_Sum.cpp M_Obj_Dir
	g++ -g  Test_Two_Sum.cpp -o obj/Two_Sum -lcppunit

Median: Median_of_Two_Sorted_Arrays_TEST.cpp Median_of_Two_Sorted_Arrays.cpp M_Obj_Dir
	g++ -g Median_of_Two_Sorted_Arrays_TEST.cpp -o obj/Median -lcppunit

M_Obj_Dir:
	mkdir -p obj
