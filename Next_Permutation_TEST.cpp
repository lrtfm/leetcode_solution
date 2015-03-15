/****************************************************************************\

    FileName: Next_Permutation_TEST.cpp
    Description: 
        test Next_Permutation
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 16:47:20

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Next_Permutation.cpp"

class Next_PermutationTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Next_PermutationTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        vector<int> num = cvector<int>(6, 6, 7, 6, 5, 4, 3);
        vector<int> exp = cvector<int>(6, 7, 3, 4, 5, 6, 6);
        solver.nextPermutation(num);
        CPPUNIT_ASSERT(exp == num);
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

    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test1", &Next_PermutationTest::test1));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test2", &Next_PermutationTest::test2));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test3", &Next_PermutationTest::test3));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test4", &Next_PermutationTest::test4));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test5", &Next_PermutationTest::test5));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test6", &Next_PermutationTest::test6));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test7", &Next_PermutationTest::test7));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test8", &Next_PermutationTest::test8));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test9", &Next_PermutationTest::test9));
    suite->addTest(new CppUnit::TestCaller<Next_PermutationTest>(
                "test10", &Next_PermutationTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
