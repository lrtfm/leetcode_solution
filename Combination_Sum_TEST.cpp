/****************************************************************************\

    FileName: Combination_Sum_TEST.cpp
    Description: 
        test Combination_Sum
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 20:04:12

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Combination_Sum.cpp"

class Combination_SumTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Combination_SumTest() {}
    void setUp() {}
    void test1() 
    {
        vector<int> candidates = cvector<int>(4, 2, 3, 6, 7);
        vector<vector<int> > exp;
        exp.push_back(cvector<int>(1, 7));
        exp.push_back(cvector<int>(3, 2, 2, 3));
        vector<vector<int> > ret = solver.combinationSum(candidates, 7);
        CPPUNIT_ASSERT(ret == exp);
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

    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test1", &Combination_SumTest::test1));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test2", &Combination_SumTest::test2));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test3", &Combination_SumTest::test3));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test4", &Combination_SumTest::test4));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test5", &Combination_SumTest::test5));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test6", &Combination_SumTest::test6));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test7", &Combination_SumTest::test7));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test8", &Combination_SumTest::test8));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test9", &Combination_SumTest::test9));
    suite->addTest(new CppUnit::TestCaller<Combination_SumTest>(
                "test10", &Combination_SumTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
