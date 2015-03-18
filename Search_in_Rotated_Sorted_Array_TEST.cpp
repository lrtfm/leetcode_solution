/****************************************************************************\

    FileName: Search_in_Rotated_Sorted_Array_TEST.cpp
    Description: 
        test Search_in_Rotated_Sorted_Array
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 23:58:35

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Search_in_Rotated_Sorted_Array.cpp"

class Search_in_Rotated_Sorted_ArrayTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Search_in_Rotated_Sorted_ArrayTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        CPPUNIT_ASSERT(1 == 1);
    }
    void test2() 
    {
        // add your code here.
        CPPUNIT_ASSERT(2 == 2);
    }
    void test3() 
    {
        // add your code here.
        CPPUNIT_ASSERT(3 == 3);
    }
    void test4() 
    {
        // add your code here.
        CPPUNIT_ASSERT(4 == 4);
    }
    void test5() 
    {
        // add your code here.
        CPPUNIT_ASSERT(5 == 5);
    }
    void test6() 
    {
        // add your code here.
        CPPUNIT_ASSERT(6 == 6);
    }
    void test7() 
    {
        // add your code here.
        CPPUNIT_ASSERT(7 == 7);
    }
    void test8() 
    {
        // add your code here.
        CPPUNIT_ASSERT(8 == 8);
    }
    void test9() 
    {
        // add your code here.
        CPPUNIT_ASSERT(9 == 9);
    }
    void test10() 
    {
        // add your code here.
        CPPUNIT_ASSERT(10 == 10);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test1", &Search_in_Rotated_Sorted_ArrayTest::test1));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test2", &Search_in_Rotated_Sorted_ArrayTest::test2));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test3", &Search_in_Rotated_Sorted_ArrayTest::test3));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test4", &Search_in_Rotated_Sorted_ArrayTest::test4));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test5", &Search_in_Rotated_Sorted_ArrayTest::test5));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test6", &Search_in_Rotated_Sorted_ArrayTest::test6));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test7", &Search_in_Rotated_Sorted_ArrayTest::test7));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test8", &Search_in_Rotated_Sorted_ArrayTest::test8));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test9", &Search_in_Rotated_Sorted_ArrayTest::test9));
    suite->addTest(new CppUnit::TestCaller<Search_in_Rotated_Sorted_ArrayTest>(
                "test10", &Search_in_Rotated_Sorted_ArrayTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
