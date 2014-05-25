/****************************************************************************\

    FileName: Roman_to_Integer_TEST.cpp
    Description: 
        test Roman_to_Integer
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 16:38:05

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Roman_to_Integer.cpp"

class Roman_to_IntegerTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Roman_to_IntegerTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        int ret = solver.romanToInt("I");
        CPPUNIT_ASSERT(ret == 1);
    }
    void test2() 
    {
        // add your code here.
        int ret = solver.romanToInt("IV");
        CPPUNIT_ASSERT(ret == 4);
    }
    void test3() 
    {
        // add your code here.
        int ret = solver.romanToInt("V");
        CPPUNIT_ASSERT(ret == 5);
    }
    void test4() 
    {
        // add your code here.
        int ret = solver.romanToInt("IX");
        CPPUNIT_ASSERT(ret == 9);
    }
    void test5() 
    {
        // add your code here.
        int ret = solver.romanToInt("XIV");
        CPPUNIT_ASSERT(ret == 14);
    }
    void test6() 
    {
        // add your code here.
        int ret = solver.romanToInt("XVI");
        CPPUNIT_ASSERT(ret == 16);
    }
    void test7() 
    {
        // add your code here.
        int ret = solver.romanToInt("CXCIX");
        CPPUNIT_ASSERT(ret == 199);
    }
    void test8() 
    {
        // add your code here.
        int ret = solver.romanToInt("MCDXXXVII");
        CPPUNIT_ASSERT(ret == 1437);
    }
    void test9() 
    {
        // add your code here.
        int ret = solver.romanToInt("MDCCCLXXX");
        CPPUNIT_ASSERT(ret == 1880);
    }
    void test10() 
    {
        // add your code here.
        int ret = solver.romanToInt("MMMCCCXXXIII");
        CPPUNIT_ASSERT(ret == 3333);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test1", &Roman_to_IntegerTest::test1));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test2", &Roman_to_IntegerTest::test2));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test3", &Roman_to_IntegerTest::test3));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test4", &Roman_to_IntegerTest::test4));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test5", &Roman_to_IntegerTest::test5));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test6", &Roman_to_IntegerTest::test6));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test7", &Roman_to_IntegerTest::test7));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test8", &Roman_to_IntegerTest::test8));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test9", &Roman_to_IntegerTest::test9));
    suite->addTest(new CppUnit::TestCaller<Roman_to_IntegerTest>(
                "test10", &Roman_to_IntegerTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
