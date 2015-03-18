/****************************************************************************\

    FileName: Valid_Sudoku_TEST.cpp
    Description: 
        test Valid_Sudoku
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ 13:40:55

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Valid_Sudoku.cpp"

class Valid_SudokuTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Valid_SudokuTest() {}
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

    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test1", &Valid_SudokuTest::test1));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test2", &Valid_SudokuTest::test2));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test3", &Valid_SudokuTest::test3));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test4", &Valid_SudokuTest::test4));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test5", &Valid_SudokuTest::test5));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test6", &Valid_SudokuTest::test6));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test7", &Valid_SudokuTest::test7));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test8", &Valid_SudokuTest::test8));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test9", &Valid_SudokuTest::test9));
    suite->addTest(new CppUnit::TestCaller<Valid_SudokuTest>(
                "test10", &Valid_SudokuTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
