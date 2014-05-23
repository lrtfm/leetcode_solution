all:Two_Sum


Two_Sum: Two_Sum.cpp Test_Two_Sum.cpp M_Obj_Dir
	g++ -g  Test_Two_Sum.cpp -o obj/Two_Sum -lcppunit

M_Obj_Dir:
	mkdir -p obj
