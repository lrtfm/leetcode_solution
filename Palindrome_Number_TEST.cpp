/****************************************************************************\

    FileName: Palindrome_Number_TEST.cpp
    Description: 
        test Palindrome_Number
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 18:48:43

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Palindrome_Number.cpp"

class Palindrome_NumberTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Palindrome_NumberTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        bool ret = solver.isPalindrome(1001);
        CPPUNIT_ASSERT(ret == true);
    }
    void test2() 
    {
        // add your code here.
        bool ret = solver.isPalindrome(101);
        CPPUNIT_ASSERT(ret == true);
    }
    void test3() 
    {
        // add your code here.
        bool ret = solver.isPalindrome(1233221);
        CPPUNIT_ASSERT(ret == false);
    }
    void test4() 
    {
        // add your code here.
        bool ret = solver.isPalindrome(1);
        CPPUNIT_ASSERT(ret == true);
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

    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test1", &Palindrome_NumberTest::test1));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test2", &Palindrome_NumberTest::test2));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test3", &Palindrome_NumberTest::test3));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test4", &Palindrome_NumberTest::test4));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test5", &Palindrome_NumberTest::test5));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test6", &Palindrome_NumberTest::test6));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test7", &Palindrome_NumberTest::test7));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test8", &Palindrome_NumberTest::test8));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test9", &Palindrome_NumberTest::test9));
    suite->addTest(new CppUnit::TestCaller<Palindrome_NumberTest>(
                "test10", &Palindrome_NumberTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
