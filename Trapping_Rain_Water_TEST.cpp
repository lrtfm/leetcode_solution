/****************************************************************************\

    FileName: Trapping_Rain_Water_TEST.cpp
    Description: 
        test Trapping_Rain_Water
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ19ÈÕ 12:30:48

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Trapping_Rain_Water.cpp"

class Trapping_Rain_WaterTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Trapping_Rain_WaterTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        int A[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        int ret = solver.trap(A, 12);
        CPPUNIT_ASSERT(ret == 6);
    }
    void test2() 
    {
        int A[] = {0,3};
        int ret = solver.trap(A, 2);
        // add your code here.
        CPPUNIT_ASSERT(ret == 0);
    }
    void test3() 
    {
        int A[] = {3,3};
        int ret = solver.trap(A, 2);
        // add your code here.
        CPPUNIT_ASSERT(ret == 0);
    }
    void test4() 
    {
        int A[] = {3,0,2};
        int ret = solver.trap(A, 3);
        // add your code here.
        CPPUNIT_ASSERT(ret == 2);
    }
    void test5() 
    {
        // add your code here.
        int A[] = {0,1,0,2,1,0,3,3,2,1,2,1};
        int ret = solver.trap(A, 12);
        CPPUNIT_ASSERT(ret == 5);
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

    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test1", &Trapping_Rain_WaterTest::test1));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test2", &Trapping_Rain_WaterTest::test2));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test3", &Trapping_Rain_WaterTest::test3));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test4", &Trapping_Rain_WaterTest::test4));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test5", &Trapping_Rain_WaterTest::test5));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test6", &Trapping_Rain_WaterTest::test6));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test7", &Trapping_Rain_WaterTest::test7));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test8", &Trapping_Rain_WaterTest::test8));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test9", &Trapping_Rain_WaterTest::test9));
    suite->addTest(new CppUnit::TestCaller<Trapping_Rain_WaterTest>(
                "test10", &Trapping_Rain_WaterTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
