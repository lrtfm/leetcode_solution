/* Test_Two_Sum.cpp */

#include <iostream>
#include <vector>
#include <cstdarg>
#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

using namespace std;

#include "Two_Sum.cpp"

vector<int> cvector(int n, ...)
{
    vector<int> ret;
    va_list arg_ptr;
    va_start(arg_ptr, n);
    for (int i = 0; i < n; ++i) {
        int value = va_arg(arg_ptr, int);
        ret.push_back(value);
    }
    va_end(arg_ptr);

    return ret;
}    

class MyTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;
public:
    MyTest() {}
    void setUp() {}

    void test01() 
    {
        vector<int> numbers = cvector(4, 15, 7, 11, 2);
        vector<int> expect = cvector(2, 2, 4);
        int target = 9;
        vector<int> output = solver.twoSum(numbers, target);
        CPPUNIT_ASSERT(expect == output);
    }

    void test02() 
    {
        vector<int> numbers = cvector(7, 1, 47, 9, 2, 12, 20, 23);
        vector<int> expect = cvector(2, 3, 7);
        int target = 70;
        vector<int> output = solver.twoSum(numbers, target);
        CPPUNIT_ASSERT(expect == output);
    }

    void tearDown() {}
};

/* test  code begin */
int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<MyTest>(
                "test01", &MyTest::test01));
    suite->addTest(new CppUnit::TestCaller<MyTest>(
                "test02", &MyTest::test02));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
