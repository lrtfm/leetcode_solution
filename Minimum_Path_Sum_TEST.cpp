/****************************************************************************\

    FileName: Minimum_Path_Sum_TEST.cpp
    Description: 
        test Minimum_Path_Sum
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 13:39:42

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Minimum_Path_Sum.cpp"

class Minimum_Path_SumTest : public CppUnit::TestFixture 
{
protected:
//    Solution solver;

public:
    Minimum_Path_SumTest() {}
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
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Minimum_Path_SumTest>(
                "test1", &Minimum_Path_SumTest::test1));
    suite->addTest(new CppUnit::TestCaller<Minimum_Path_SumTest>(
                "test2", &Minimum_Path_SumTest::test2));
    suite->addTest(new CppUnit::TestCaller<Minimum_Path_SumTest>(
                "test3", &Minimum_Path_SumTest::test3));
    suite->addTest(new CppUnit::TestCaller<Minimum_Path_SumTest>(
                "test4", &Minimum_Path_SumTest::test4));
    suite->addTest(new CppUnit::TestCaller<Minimum_Path_SumTest>(
                "test5", &Minimum_Path_SumTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
