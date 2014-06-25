/****************************************************************************\

    FileName: Sum4_TEST.cpp
    Description: 
        test Sum4
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Tue May 27 12:14:55 CST 2014

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "common.h"
#include "Sum4.cpp"

class Sum4Test : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Sum4Test() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<int> num = cvector(4, 2, 1, 0, -1);
        vector<int> exp = cvector(4, -1, 0, 1, 2);
        vector<vector<int> > expret;
        expret.push_back(exp);
        vector<vector<int> > ret = solver.fourSum(num, 2);

        CPPUNIT_ASSERT(expret == ret);
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

    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test1", &Sum4Test::test1));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test2", &Sum4Test::test2));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test3", &Sum4Test::test3));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test4", &Sum4Test::test4));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test5", &Sum4Test::test5));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test6", &Sum4Test::test6));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test7", &Sum4Test::test7));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test8", &Sum4Test::test8));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test9", &Sum4Test::test9));
    suite->addTest(new CppUnit::TestCaller<Sum4Test>(
                "test10", &Sum4Test::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
