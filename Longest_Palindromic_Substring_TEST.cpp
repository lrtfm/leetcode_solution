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
        string ret = solver.longestPalindrome("a");
        CPPUNIT_ASSERT(ret == string("a"));
    }
    void test2() 
    {
        // add your code here.
        string ret = solver.longestPalindrome("abccba");
        CPPUNIT_ASSERT(ret == string("abccba"));
    }
    void test3() 
    {
        // add your code here.
        string ret = solver.longestPalindrome("abcdeedabcdeffedc");
        CPPUNIT_ASSERT(ret == string("cdeffedc"));
    }
    void test4() 
    {
        // add your code here.
        string ret = solver.longestPalindrome("abbaaddaabccba");
        CPPUNIT_ASSERT(ret == string("baaddaab"));
    }
    void test5() 
    {
        // add your code here.
        string ret = solver.longestPalindrome("aaaaaaaaa");
        CPPUNIT_ASSERT(ret == string("aaaaaaaaa"));
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
