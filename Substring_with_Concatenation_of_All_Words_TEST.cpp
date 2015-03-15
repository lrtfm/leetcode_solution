/****************************************************************************\

    FileName: Substring_with_Concatenation_of_All_Words_TEST.cpp
    Description: 
        test Substring_with_Concatenation_of_All_Words
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年10月24日  0:01:27

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Substring_with_Concatenation_of_All_Words.cpp"

class Substring_with_Concatenation_of_All_WordsTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Substring_with_Concatenation_of_All_WordsTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        string S("barfoothefoobarman");
        vector<string> L;
        L.push_back(string("foo"));
        L.push_back(string("bar"));
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret;

        ret = solver.findSubstring(S, L);
        sort(expect.begin(), expect.end());
        sort(ret.begin(), ret.end());

        CPPUNIT_ASSERT(ret == expect);
    }
    void test2() 
    {

        string S("aaaaaaaa");
        vector<string> L;
        L.push_back(string("aa"));
        L.push_back(string("aa"));
        L.push_back(string("aa"));
        vector<int> expect = cvector<int>(3, 0, 1, 2);
        vector<int> ret;

        ret = solver.findSubstring(S, L);
        sort(expect.begin(), expect.end());
        sort(ret.begin(), ret.end());
        CPPUNIT_ASSERT(ret == expect);
    }
    void test3() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);
        CPPUNIT_ASSERT(ret == expect);
    }
    void test4() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);

        CPPUNIT_ASSERT(ret == expect);
    }
    void test5() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);

        CPPUNIT_ASSERT(ret == expect);
    }
    void test6() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);

        CPPUNIT_ASSERT(ret == expect);
    }
    void test7() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);
        CPPUNIT_ASSERT(ret == expect);
    }
    void test8() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);
        CPPUNIT_ASSERT(ret == expect);
    }
    void test9() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);
        CPPUNIT_ASSERT(ret == expect);
    }
    void test10() 
    {
        vector<int> expect = cvector<int>(2, 0, 9);
        vector<int> ret = cvector<int>(2, 0, 9);
        CPPUNIT_ASSERT(ret == expect);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test1", &Substring_with_Concatenation_of_All_WordsTest::test1));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test2", &Substring_with_Concatenation_of_All_WordsTest::test2));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test3", &Substring_with_Concatenation_of_All_WordsTest::test3));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test4", &Substring_with_Concatenation_of_All_WordsTest::test4));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test5", &Substring_with_Concatenation_of_All_WordsTest::test5));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test6", &Substring_with_Concatenation_of_All_WordsTest::test6));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test7", &Substring_with_Concatenation_of_All_WordsTest::test7));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test8", &Substring_with_Concatenation_of_All_WordsTest::test8));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test9", &Substring_with_Concatenation_of_All_WordsTest::test9));
    suite->addTest(new CppUnit::TestCaller<Substring_with_Concatenation_of_All_WordsTest>(
                "test10", &Substring_with_Concatenation_of_All_WordsTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
