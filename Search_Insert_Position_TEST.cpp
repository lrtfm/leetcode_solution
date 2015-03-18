/****************************************************************************\

    FileName: Search_Insert_Position_TEST.cpp
    Description: 
        test Search_Insert_Position
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ  0:00:28

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Search_Insert_Position.cpp"

class Search_Insert_PositionTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Search_Insert_PositionTest() {}
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

    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test1", &Search_Insert_PositionTest::test1));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test2", &Search_Insert_PositionTest::test2));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test3", &Search_Insert_PositionTest::test3));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test4", &Search_Insert_PositionTest::test4));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test5", &Search_Insert_PositionTest::test5));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test6", &Search_Insert_PositionTest::test6));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test7", &Search_Insert_PositionTest::test7));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test8", &Search_Insert_PositionTest::test8));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test9", &Search_Insert_PositionTest::test9));
    suite->addTest(new CppUnit::TestCaller<Search_Insert_PositionTest>(
                "test10", &Search_Insert_PositionTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
