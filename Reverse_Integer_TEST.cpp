/****************************************************************************\

    FileName: Reverse_Integer_TEST.cpp
    Description: 
        test Reverse_Integer
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 12:07:37

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Reverse_Integer.cpp"

class Reverse_IntegerTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Reverse_IntegerTest() {}
    void setUp() {}
    void test1() 
    {
        int ret = solver.reverse(123);
        CPPUNIT_ASSERT(ret == 321);
    }
    void test2() 
    {
        // add your code here.
        int ret = solver.reverse(123000);
        CPPUNIT_ASSERT(ret == 321);
    }
    void test3() 
    {
        // add your code here.
        int ret = solver.reverse(-123);
        CPPUNIT_ASSERT(ret == -321);
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

    suite->addTest(new CppUnit::TestCaller<Reverse_IntegerTest>(
                "test1", &Reverse_IntegerTest::test1));
    suite->addTest(new CppUnit::TestCaller<Reverse_IntegerTest>(
                "test2", &Reverse_IntegerTest::test2));
    suite->addTest(new CppUnit::TestCaller<Reverse_IntegerTest>(
                "test3", &Reverse_IntegerTest::test3));
    suite->addTest(new CppUnit::TestCaller<Reverse_IntegerTest>(
                "test4", &Reverse_IntegerTest::test4));
    suite->addTest(new CppUnit::TestCaller<Reverse_IntegerTest>(
                "test5", &Reverse_IntegerTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
