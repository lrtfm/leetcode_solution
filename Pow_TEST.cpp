/****************************************************************************\

    FileName: Pow_TEST.cpp
    Description: 
        test Pow
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê04ÔÂ 5ÈÕ 10:31:55

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Pow.cpp"

class PowTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    PowTest() {}
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

    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test1", &PowTest::test1));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test2", &PowTest::test2));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test3", &PowTest::test3));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test4", &PowTest::test4));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test5", &PowTest::test5));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test6", &PowTest::test6));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test7", &PowTest::test7));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test8", &PowTest::test8));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test9", &PowTest::test9));
    suite->addTest(new CppUnit::TestCaller<PowTest>(
                "test10", &PowTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
