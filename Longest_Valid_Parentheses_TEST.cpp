/****************************************************************************\

    FileName: Longest_Valid_Parentheses_TEST.cpp
    Description: 
        test Longest_Valid_Parentheses
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 17:33:25

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Longest_Valid_Parentheses.cpp"

class Longest_Valid_ParenthesesTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Longest_Valid_ParenthesesTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        int ret = solver.longestValidParentheses(string("(()"));
        CPPUNIT_ASSERT(ret == 2);
    }
    void test2() 
    {
        // add your code here.
        int ret = solver.longestValidParentheses(string(")()())"));
        CPPUNIT_ASSERT(ret == 4);
    }
    void test3() 
    {
        // add your code here.
        int ret = solver.longestValidParentheses(string("()(()"));
        CPPUNIT_ASSERT(ret == 2);
    }
    void test4() 
    {
        // add your code here.
        int ret = solver.longestValidParentheses(string("(()"));
        CPPUNIT_ASSERT(ret == 2);
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

    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test1", &Longest_Valid_ParenthesesTest::test1));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test2", &Longest_Valid_ParenthesesTest::test2));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test3", &Longest_Valid_ParenthesesTest::test3));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test4", &Longest_Valid_ParenthesesTest::test4));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test5", &Longest_Valid_ParenthesesTest::test5));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test6", &Longest_Valid_ParenthesesTest::test6));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test7", &Longest_Valid_ParenthesesTest::test7));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test8", &Longest_Valid_ParenthesesTest::test8));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test9", &Longest_Valid_ParenthesesTest::test9));
    suite->addTest(new CppUnit::TestCaller<Longest_Valid_ParenthesesTest>(
                "test10", &Longest_Valid_ParenthesesTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
