/****************************************************************************\

    FileName: Valid_Parentheses_TEST.cpp
    Description: 
        test Valid_Parentheses
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sat Jun 14 23:52:07 CST 2014

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Valid_Parentheses.cpp"

class Valid_ParenthesesTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Valid_ParenthesesTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        bool ret = solver.isValid("()[]{}");
        CPPUNIT_ASSERT(ret == true);
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

    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test1", &Valid_ParenthesesTest::test1));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test2", &Valid_ParenthesesTest::test2));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test3", &Valid_ParenthesesTest::test3));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test4", &Valid_ParenthesesTest::test4));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test5", &Valid_ParenthesesTest::test5));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test6", &Valid_ParenthesesTest::test6));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test7", &Valid_ParenthesesTest::test7));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test8", &Valid_ParenthesesTest::test8));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test9", &Valid_ParenthesesTest::test9));
    suite->addTest(new CppUnit::TestCaller<Valid_ParenthesesTest>(
                "test10", &Valid_ParenthesesTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
