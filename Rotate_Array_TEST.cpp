/****************************************************************************\

    FileName: Rotate_Array_TEST.cpp
    Description: 
        test Rotate_Array
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ 12:56:51

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Rotate_Array.cpp"

class Rotate_ArrayTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Rotate_ArrayTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<int> num = cvector<int>(7, 1, 2, 3, 4, 5, 6, 7);
        vector<int> exp = cvector<int>(7, 5, 6, 7, 1, 2, 3, 4);
        solver.rotate(num, 7, 3);
        CPPUNIT_ASSERT(num == exp);
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

    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test1", &Rotate_ArrayTest::test1));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test2", &Rotate_ArrayTest::test2));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test3", &Rotate_ArrayTest::test3));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test4", &Rotate_ArrayTest::test4));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test5", &Rotate_ArrayTest::test5));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test6", &Rotate_ArrayTest::test6));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test7", &Rotate_ArrayTest::test7));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test8", &Rotate_ArrayTest::test8));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test9", &Rotate_ArrayTest::test9));
    suite->addTest(new CppUnit::TestCaller<Rotate_ArrayTest>(
                "test10", &Rotate_ArrayTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
