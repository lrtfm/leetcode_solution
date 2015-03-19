/****************************************************************************\

    FileName: Count_and_Say_TEST.cpp
    Description: 
        test Count_and_Say
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 18:58:57

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Count_and_Say.cpp"

class Count_and_SayTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Count_and_SayTest() {}
    void setUp() {}
    void test1() 
    {
        string exp = "1";
        string ret = solver.countAndSay(1);
        // add your code here.
        CPPUNIT_ASSERT(exp == ret);
    }
    void test2() 
    {
        string exp = "11";
        string ret = solver.countAndSay(2);
        // add your code here.
        CPPUNIT_ASSERT(exp == ret);
    }
    void test3() 
    {
        string exp = "21";
        string ret = solver.countAndSay(3);
        // add your code here.
        CPPUNIT_ASSERT(exp == ret);
    }
    void test4() 
    {
        string exp = "1211";
        string ret = solver.countAndSay(4);
        // add your code here.
        CPPUNIT_ASSERT(exp == ret);
    }
    void test5() 
    {
        string exp = "111221";
        string ret = solver.countAndSay(5);
        // add your code here.
        CPPUNIT_ASSERT(exp == ret);
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

    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test1", &Count_and_SayTest::test1));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test2", &Count_and_SayTest::test2));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test3", &Count_and_SayTest::test3));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test4", &Count_and_SayTest::test4));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test5", &Count_and_SayTest::test5));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test6", &Count_and_SayTest::test6));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test7", &Count_and_SayTest::test7));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test8", &Count_and_SayTest::test8));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test9", &Count_and_SayTest::test9));
    suite->addTest(new CppUnit::TestCaller<Count_and_SayTest>(
                "test10", &Count_and_SayTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
