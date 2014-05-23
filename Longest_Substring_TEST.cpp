/****************************************************************************
    FileName: Longest_Substring_TEST.cpp
    Description: 
        test Longest_Substring
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 16:40:38

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Longest_Substring.cpp"

class Longest_SubstringTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;
public:
    Longest_SubstringTest() {}
    void setUp() {}
    void test1() 
    {
        int ret = solver.lengthOfLongestSubstring("bbbbbbb");
        CPPUNIT_ASSERT(ret == 1);
    }
    void test2() 
    {
        int ret = solver.lengthOfLongestSubstring("abcabcbb");
        CPPUNIT_ASSERT(ret == 3);
    }
    void test3() 
    {
        int ret = solver.lengthOfLongestSubstring("abcdefhijk");
        CPPUNIT_ASSERT(ret == 10);
    }
    void test4() 
    {
        // add your code here.
        int ret = solver.lengthOfLongestSubstring("ababababababab");
        CPPUNIT_ASSERT(ret == 2);
    }
    void test5() 
    {
        // add your code here.
        int ret = solver.lengthOfLongestSubstring("yangzongze");
        CPPUNIT_ASSERT(ret == 6);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Longest_SubstringTest>(
                "test1", &Longest_SubstringTest::test1));
    suite->addTest(new CppUnit::TestCaller<Longest_SubstringTest>(
                "test2", &Longest_SubstringTest::test2));
    suite->addTest(new CppUnit::TestCaller<Longest_SubstringTest>(
                "test3", &Longest_SubstringTest::test3));
    suite->addTest(new CppUnit::TestCaller<Longest_SubstringTest>(
                "test4", &Longest_SubstringTest::test4));
    suite->addTest(new CppUnit::TestCaller<Longest_SubstringTest>(
                "test5", &Longest_SubstringTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
