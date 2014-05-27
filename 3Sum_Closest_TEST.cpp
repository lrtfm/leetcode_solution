/****************************************************************************\

    FileName: 3Sum_Closest_TEST.cpp
    Description: 
        test 3Sum_Closest
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Mon May 26 23:28:20 CST 2014

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "common.h"
#include "3Sum_Closest.cpp"

class Sum_ClosestTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Sum_ClosestTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<int> num = cvector(4, 1, 1, 1, 0);
        int ret = solver.threeSumClosest(num, 100);
        CPPUNIT_ASSERT(ret == 3);
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

    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test1", &Sum_ClosestTest::test1));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test2", &Sum_ClosestTest::test2));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test3", &Sum_ClosestTest::test3));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test4", &Sum_ClosestTest::test4));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test5", &Sum_ClosestTest::test5));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test6", &Sum_ClosestTest::test6));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test7", &Sum_ClosestTest::test7));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test8", &Sum_ClosestTest::test8));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test9", &Sum_ClosestTest::test9));
    suite->addTest(new CppUnit::TestCaller<Sum_ClosestTest>(
                "test10", &Sum_ClosestTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
