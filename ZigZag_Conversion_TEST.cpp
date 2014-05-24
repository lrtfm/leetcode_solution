/****************************************************************************\

    FileName: ZigZag_Conversion_TEST.cpp
    Description: 
        test ZigZag_Conversion
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 11:34:34

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "ZigZag_Conversion.cpp"

class ZigZag_ConversionTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    ZigZag_ConversionTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        string ret = solver.convert("abcdefgh", 3);
        CPPUNIT_ASSERT(ret == string("aebdfhcg"));
    }
    void test2() 
    {
        // add your code here.
        string ret = solver.convert("ab", 1);
        CPPUNIT_ASSERT(ret == string("ab"));
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
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<ZigZag_ConversionTest>(
                "test1", &ZigZag_ConversionTest::test1));
    suite->addTest(new CppUnit::TestCaller<ZigZag_ConversionTest>(
                "test2", &ZigZag_ConversionTest::test2));
    suite->addTest(new CppUnit::TestCaller<ZigZag_ConversionTest>(
                "test3", &ZigZag_ConversionTest::test3));
    suite->addTest(new CppUnit::TestCaller<ZigZag_ConversionTest>(
                "test4", &ZigZag_ConversionTest::test4));
    suite->addTest(new CppUnit::TestCaller<ZigZag_ConversionTest>(
                "test5", &ZigZag_ConversionTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
