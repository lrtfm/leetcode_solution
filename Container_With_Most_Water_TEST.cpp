/****************************************************************************\

    FileName: Container_With_Most_Water_TEST.cpp
    Description: 
        test Container_With_Most_Water
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 15:21:58

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Container_With_Most_Water.cpp"

class Container_With_Most_WaterTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Container_With_Most_WaterTest() {}
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

    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test1", &Container_With_Most_WaterTest::test1));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test2", &Container_With_Most_WaterTest::test2));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test3", &Container_With_Most_WaterTest::test3));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test4", &Container_With_Most_WaterTest::test4));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test5", &Container_With_Most_WaterTest::test5));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test6", &Container_With_Most_WaterTest::test6));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test7", &Container_With_Most_WaterTest::test7));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test8", &Container_With_Most_WaterTest::test8));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test9", &Container_With_Most_WaterTest::test9));
    suite->addTest(new CppUnit::TestCaller<Container_With_Most_WaterTest>(
                "test10", &Container_With_Most_WaterTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
