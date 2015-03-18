/****************************************************************************\

    FileName: Sudoku_Solver_TEST.cpp
    Description: 
        test Sudoku_Solver
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ17ÈÕ 22:49:35

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Sudoku_Solver.cpp"

class Sudoku_SolverTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;

public:
    Sudoku_SolverTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        int n = 9;
        vector<vector<char> > board;
        vector<vector<char> > exp;
        const char *s;
        /*         "123456789" */
        /* 1 */s = "..9748..."; board.push_back(vector<char>(s, s+n));
        /* 2 */s = "7........"; board.push_back(vector<char>(s, s+n));
        /* 3 */s = ".2.1.9..."; board.push_back(vector<char>(s, s+n));
        /* 4 */s = "..7...24."; board.push_back(vector<char>(s, s+n));
        /* 5 */s = ".64.1.59."; board.push_back(vector<char>(s, s+n));
        /* 6 */s = ".98...3.."; board.push_back(vector<char>(s, s+n));
        /* 7 */s = "...8.3.2."; board.push_back(vector<char>(s, s+n));
        /* 8 */s = "........6"; board.push_back(vector<char>(s, s+n));
        /* 9 */s = "...2759.."; board.push_back(vector<char>(s, s+n));
        /*         "123456789" */
        /* 1 */s = "519748632"; exp.push_back(vector<char>(s, s+n));
        /* 2 */s = "783652419"; exp.push_back(vector<char>(s, s+n));
        /* 3 */s = "426139875"; exp.push_back(vector<char>(s, s+n));
        /* 4 */s = "357986241"; exp.push_back(vector<char>(s, s+n));
        /* 5 */s = "264317598"; exp.push_back(vector<char>(s, s+n));
        /* 6 */s = "198524367"; exp.push_back(vector<char>(s, s+n));
        /* 7 */s = "975863124"; exp.push_back(vector<char>(s, s+n));
        /* 8 */s = "832491756"; exp.push_back(vector<char>(s, s+n));
        /* 9 */s = "641275983"; exp.push_back(vector<char>(s, s+n));
        solver.solveSudoku(board); 
        CPPUNIT_ASSERT(board == exp);
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

    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test1", &Sudoku_SolverTest::test1));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test2", &Sudoku_SolverTest::test2));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test3", &Sudoku_SolverTest::test3));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test4", &Sudoku_SolverTest::test4));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test5", &Sudoku_SolverTest::test5));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test6", &Sudoku_SolverTest::test6));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test7", &Sudoku_SolverTest::test7));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test8", &Sudoku_SolverTest::test8));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test9", &Sudoku_SolverTest::test9));
    suite->addTest(new CppUnit::TestCaller<Sudoku_SolverTest>(
                "test10", &Sudoku_SolverTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
