/****************************************************************************\

    FileName: Generate_Parentheses_TEST.cpp
    Description: 
        test Generate_Parentheses
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sun Jun 22 00:04:20 CST 2014

\****************************************************************************/

#include "common.h"
#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Generate_Parentheses.cpp"

class Generate_ParenthesesTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Generate_ParenthesesTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<string> exp;
        exp.push_back("()");

        vector<string> ret = solver.generateParenthesis(1);
        CPPUNIT_ASSERT(exp == ret);
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

    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test1", &Generate_ParenthesesTest::test1));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test2", &Generate_ParenthesesTest::test2));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test3", &Generate_ParenthesesTest::test3));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test4", &Generate_ParenthesesTest::test4));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test5", &Generate_ParenthesesTest::test5));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test6", &Generate_ParenthesesTest::test6));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test7", &Generate_ParenthesesTest::test7));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test8", &Generate_ParenthesesTest::test8));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test9", &Generate_ParenthesesTest::test9));
    suite->addTest(new CppUnit::TestCaller<Generate_ParenthesesTest>(
                "test10", &Generate_ParenthesesTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
