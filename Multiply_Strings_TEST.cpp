/****************************************************************************\

    FileName: Multiply_Strings_TEST.cpp
    Description: 
        test Multiply_Strings
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015年03月20日  8:41:44

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Multiply_Strings.cpp"

class Multiply_StringsTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Multiply_StringsTest() {}
    void setUp() {}
    void test1() 
    {
        string num1("123");
        string num2("2");
        string exp("246");
        string ret = solver.multiply(num1, num2);
        // add your code here.
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

    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test1", &Multiply_StringsTest::test1));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test2", &Multiply_StringsTest::test2));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test3", &Multiply_StringsTest::test3));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test4", &Multiply_StringsTest::test4));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test5", &Multiply_StringsTest::test5));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test6", &Multiply_StringsTest::test6));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test7", &Multiply_StringsTest::test7));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test8", &Multiply_StringsTest::test8));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test9", &Multiply_StringsTest::test9));
    suite->addTest(new CppUnit::TestCaller<Multiply_StringsTest>(
                "test10", &Multiply_StringsTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
