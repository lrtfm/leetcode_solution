/****************************************************************************\

    FileName: Integer_to_Roman_TEST.cpp
    Description: 
        test Integer_to_Roman
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 16:37:46

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Integer_to_Roman.cpp"

class Integer_to_RomanTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Integer_to_RomanTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        string ret = solver.intToRoman(0);
        CPPUNIT_ASSERT(ret == "");
    }
    void test2() 
    {
        // add your code here.
        string ret = solver.intToRoman(1);
        CPPUNIT_ASSERT(ret == "I");
    }
    void test3() 
    {
        // add your code here.
        string ret = solver.intToRoman(4);
        CPPUNIT_ASSERT(ret == "IV");
    }
    void test4() 
    {
        // add your code here.
        string ret = solver.intToRoman(6);
        CPPUNIT_ASSERT(ret == "VI");
    }
    void test5() 
    {
        // add your code here.
        string ret = solver.intToRoman(5);
        CPPUNIT_ASSERT(ret == "V");
    }
    void test6() 
    {
        // add your code here.
        string ret = solver.intToRoman(9);
        CPPUNIT_ASSERT(ret == "IX");
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

    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test1", &Integer_to_RomanTest::test1));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test2", &Integer_to_RomanTest::test2));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test3", &Integer_to_RomanTest::test3));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test4", &Integer_to_RomanTest::test4));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test5", &Integer_to_RomanTest::test5));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test6", &Integer_to_RomanTest::test6));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test7", &Integer_to_RomanTest::test7));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test8", &Integer_to_RomanTest::test8));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test9", &Integer_to_RomanTest::test9));
    suite->addTest(new CppUnit::TestCaller<Integer_to_RomanTest>(
                "test10", &Integer_to_RomanTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
