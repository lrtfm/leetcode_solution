/****************************************************************************\

    FileName: Regular_Expression_Matching_TEST.cpp
    Description: 
        test Regular_Expression_Matching
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 19:05:39

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Regular_Expression_Matching.cpp"

class Regular_Expression_MatchingTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Regular_Expression_MatchingTest() {}
    void setUp() {}
    void test1() 
    {
        bool ret = solver.isMatch("aa", "a");
        CPPUNIT_ASSERT(ret == false);
    }
    void test2() 
    {
        bool ret = solver.isMatch("aa", "aa");
        CPPUNIT_ASSERT(ret == true);
    }
    void test3() 
    {
        bool ret = solver.isMatch("aaa", "a");
        CPPUNIT_ASSERT(ret == false);
    }
    void test4() 
    {
        bool ret = solver.isMatch("aa", "a*");
        CPPUNIT_ASSERT(ret == true);
    }
    void test5() 
    {
        bool ret = solver.isMatch("aa", ".*");
        CPPUNIT_ASSERT(ret == true);
    }
    void test6() 
    {
        bool ret = solver.isMatch("ab", ".*");
        CPPUNIT_ASSERT(ret == true);
    }
    void test7() 
    {
        bool ret = solver.isMatch("aab", "c*a*b");
        CPPUNIT_ASSERT(ret == true);
    }
    void test8() 
    {
        bool ret = solver.isMatch("aa", "a");
        CPPUNIT_ASSERT(ret == false);
    }
    void test9() 
    {
        bool ret = solver.isMatch("aaa", "a*a");
        CPPUNIT_ASSERT(ret == true);
    }
    void test10() 
    {
        bool ret = solver.isMatch("aaa", "ab*a*c*a");
        CPPUNIT_ASSERT(ret == true);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test1", &Regular_Expression_MatchingTest::test1));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test2", &Regular_Expression_MatchingTest::test2));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test3", &Regular_Expression_MatchingTest::test3));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test4", &Regular_Expression_MatchingTest::test4));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test5", &Regular_Expression_MatchingTest::test5));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test6", &Regular_Expression_MatchingTest::test6));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test7", &Regular_Expression_MatchingTest::test7));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test8", &Regular_Expression_MatchingTest::test8));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test9", &Regular_Expression_MatchingTest::test9));
    suite->addTest(new CppUnit::TestCaller<Regular_Expression_MatchingTest>(
                "test10", &Regular_Expression_MatchingTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
