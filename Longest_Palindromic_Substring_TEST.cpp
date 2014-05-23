/****************************************************************************\

    FileName: Longest_Palindromic_Substring_TEST.cpp
    Description: 
        test Longest_Palindromic_Substring
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 21:56:19

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Longest_Palindromic_Substring.cpp"

class Longest_Palindromic_SubstringTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Longest_Palindromic_SubstringTest() {}
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
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Longest_Palindromic_SubstringTest>(
                "test1", &Longest_Palindromic_SubstringTest::test1));
    suite->addTest(new CppUnit::TestCaller<Longest_Palindromic_SubstringTest>(
                "test2", &Longest_Palindromic_SubstringTest::test2));
    suite->addTest(new CppUnit::TestCaller<Longest_Palindromic_SubstringTest>(
                "test3", &Longest_Palindromic_SubstringTest::test3));
    suite->addTest(new CppUnit::TestCaller<Longest_Palindromic_SubstringTest>(
                "test4", &Longest_Palindromic_SubstringTest::test4));
    suite->addTest(new CppUnit::TestCaller<Longest_Palindromic_SubstringTest>(
                "test5", &Longest_Palindromic_SubstringTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
