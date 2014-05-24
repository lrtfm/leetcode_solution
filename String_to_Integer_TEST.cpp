/****************************************************************************\

    FileName: String_to_Integer_TEST.cpp
    Description: 
        test String_to_Integer
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 12:22:19

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "String_to_Integer.cpp"

class String_to_IntegerTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    String_to_IntegerTest() {}
    void setUp() {}
    void test1() 
    {
        int ret = solver.atoi("123");
        CPPUNIT_ASSERT(ret == 123);
    }
    void test2() 
    {
        int ret = solver.atoi("   -123");
        CPPUNIT_ASSERT(ret == -123);
    }
    void test3() 
    {
        int ret = solver.atoi("   +123");
        CPPUNIT_ASSERT(ret == 123);
    }
    void test4() 
    {
        int ret = solver.atoi("2147483649");
        CPPUNIT_ASSERT(ret == 2147483647);
    }
    void test5() 
    {
        int ret = solver.atoi("-2147483648");
        CPPUNIT_ASSERT(ret == -2147483648);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<String_to_IntegerTest>(
                "test1", &String_to_IntegerTest::test1));
    suite->addTest(new CppUnit::TestCaller<String_to_IntegerTest>(
                "test2", &String_to_IntegerTest::test2));
    suite->addTest(new CppUnit::TestCaller<String_to_IntegerTest>(
                "test3", &String_to_IntegerTest::test3));
    suite->addTest(new CppUnit::TestCaller<String_to_IntegerTest>(
                "test4", &String_to_IntegerTest::test4));
    suite->addTest(new CppUnit::TestCaller<String_to_IntegerTest>(
                "test5", &String_to_IntegerTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
