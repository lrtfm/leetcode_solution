/****************************************************************************\

    FileName: Max_Points_on_a_Line_TEST.cpp
    Description: 
        test Max_Points_on_a_Line
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sat Jun 14 20:35:48 CST 2014

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "common.h"
#include "Max_Points_on_a_Line.cpp"

class Max_Points_on_a_LineTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Max_Points_on_a_LineTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<Point> points = cvector<Point>(3, Point(2, 3), Point(2,3), Point(3, 4));
        int ret = solver.maxPoints(points);
        CPPUNIT_ASSERT(ret == 3);
    }
    void test2() 
    {
        // add your code here.
        vector<Point> points = cvector<Point>(9, 
                Point(84, 250), Point(0, 0), Point(1, 0),
                Point(0, -70), Point(0, -70), Point(1, -1),
                Point(21, 10), Point(42, 90), Point(-42, -230));
        int ret = solver.maxPoints(points);
        CPPUNIT_ASSERT(ret == 6);
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

    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test1", &Max_Points_on_a_LineTest::test1));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test2", &Max_Points_on_a_LineTest::test2));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test3", &Max_Points_on_a_LineTest::test3));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test4", &Max_Points_on_a_LineTest::test4));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test5", &Max_Points_on_a_LineTest::test5));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test6", &Max_Points_on_a_LineTest::test6));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test7", &Max_Points_on_a_LineTest::test7));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test8", &Max_Points_on_a_LineTest::test8));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test9", &Max_Points_on_a_LineTest::test9));
    suite->addTest(new CppUnit::TestCaller<Max_Points_on_a_LineTest>(
                "test10", &Max_Points_on_a_LineTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
