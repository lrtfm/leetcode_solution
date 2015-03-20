/****************************************************************************\

    FileName: Wildcard_Matching_TEST.cpp
    Description: 
        test Wildcard_Matching
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015年03月20日 16:11:27

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Wildcard_Matching.cpp"

class Wildcard_MatchingTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Wildcard_MatchingTest() {}
    void setUp() {}
    void test1() 
    {
        bool ret = solver.isMatch("", "?");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test2() 
    {
        // add your code here.
        bool ret = solver.isMatch("aa", "aa");
        bool exp = true;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test3() 
    {
        // add your code here.
        bool ret = solver.isMatch("aaa", "aa");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test4() 
    {
        // add your code here.
        bool ret = solver.isMatch("aa", "*");
        bool exp = true;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test5() 
    {
        // add your code here.
        bool ret = solver.isMatch("aa", "a*");
        bool exp = true;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test6() 
    {
        // add your code here.
        bool ret = solver.isMatch("ab", "?*");
        bool exp = true;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test7() 
    {
        // add your code here.
        bool ret = solver.isMatch("aab", "c*a*b");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test8() 
    {
        // add your code here.
        bool ret = solver.isMatch("ab", "*a");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test9() 
    {
        // add your code here.
        bool ret = solver.isMatch("abbabaaabbabbaababbabbbbbabbbabbbabaaaaababababbbabababaabbababaabbbbbbaaaabababbbaabbbbaabbbbababababbaabbaababaabbbababababbbbaaabbbbbabaaaabbababbbbaababaabbababbbbbababbbabaaaaaaaabbbbbaabaaababaaaabb", "**aa*****ba*a*bb**aa*ab****a*aaaaaa***a*aaaa**bbabb*b*b**aaaaaaaaa*a********ba*bbb***a*ba*bb*bb**a*b*bb");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void test10() 
    {
        // add your code here.
        bool ret = solver.isMatch("aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba", "a*******b");
        bool exp = false;
        CPPUNIT_ASSERT(ret == exp);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test1", &Wildcard_MatchingTest::test1));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test2", &Wildcard_MatchingTest::test2));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test3", &Wildcard_MatchingTest::test3));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test4", &Wildcard_MatchingTest::test4));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test5", &Wildcard_MatchingTest::test5));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test6", &Wildcard_MatchingTest::test6));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test7", &Wildcard_MatchingTest::test7));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test8", &Wildcard_MatchingTest::test8));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test9", &Wildcard_MatchingTest::test9));
    suite->addTest(new CppUnit::TestCaller<Wildcard_MatchingTest>(
                "test10", &Wildcard_MatchingTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
