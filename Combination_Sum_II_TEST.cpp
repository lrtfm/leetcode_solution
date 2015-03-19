/****************************************************************************\

    FileName: Combination_Sum_II_TEST.cpp
    Description: 
        test Combination_Sum_II
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 21:18:09

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Combination_Sum_II.cpp"

class Combination_Sum_IITest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Combination_Sum_IITest() {}
    void setUp() {}
    void test1() 
    {
        vector<int> candidates = cvector<int>(7, 10, 1, 2, 7, 6, 1, 5);
        vector<vector<int> > exp;
        exp.push_back(cvector<int>(2, 1, 7));
        exp.push_back(cvector<int>(2, 2, 6));
        exp.push_back(cvector<int>(3, 1, 1, 6));
        exp.push_back(cvector<int>(3, 1, 2, 5));
        vector<vector<int> > ret = solver.combinationSum2(candidates, 8);
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

    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test1", &Combination_Sum_IITest::test1));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test2", &Combination_Sum_IITest::test2));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test3", &Combination_Sum_IITest::test3));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test4", &Combination_Sum_IITest::test4));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test5", &Combination_Sum_IITest::test5));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test6", &Combination_Sum_IITest::test6));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test7", &Combination_Sum_IITest::test7));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test8", &Combination_Sum_IITest::test8));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test9", &Combination_Sum_IITest::test9));
    suite->addTest(new CppUnit::TestCaller<Combination_Sum_IITest>(
                "test10", &Combination_Sum_IITest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
