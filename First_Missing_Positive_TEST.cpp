/****************************************************************************\

    FileName: First_Missing_Positive_TEST.cpp
    Description: 
        test First_Missing_Positive
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 23:14:55

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "First_Missing_Positive.cpp"

class First_Missing_PositiveTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    First_Missing_PositiveTest() {}
    void setUp() {}
    void test1() 
    {
        int A[] = {1, 2, 0};
        int ret = solver.firstMissingPositive(A, 3);
        CPPUNIT_ASSERT(ret == 3);
    }
    void test2() 
    {
        int A[] = {2, 1};
        int ret = solver.firstMissingPositive(A, 2);
        CPPUNIT_ASSERT(ret == 3);
    }
    void test3() 
    {
        int A[] = {3, 4, -1, 1};
        int ret = solver.firstMissingPositive(A, 4);
        CPPUNIT_ASSERT(ret == 2);
    }
    void test4() 
    {
        int A[] = {0, 1, 2};
        int ret = solver.firstMissingPositive(A, 3);
        CPPUNIT_ASSERT(ret == 3);
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

    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test1", &First_Missing_PositiveTest::test1));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test2", &First_Missing_PositiveTest::test2));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test3", &First_Missing_PositiveTest::test3));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test4", &First_Missing_PositiveTest::test4));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test5", &First_Missing_PositiveTest::test5));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test6", &First_Missing_PositiveTest::test6));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test7", &First_Missing_PositiveTest::test7));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test8", &First_Missing_PositiveTest::test8));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test9", &First_Missing_PositiveTest::test9));
    suite->addTest(new CppUnit::TestCaller<First_Missing_PositiveTest>(
                "test10", &First_Missing_PositiveTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
