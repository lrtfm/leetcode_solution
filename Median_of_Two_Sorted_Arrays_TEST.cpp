
/****************************************************************************
    FileName: Median_of_Two_Sorted_Arrays_TEST.cpp
    Description: 
        test Median_of_Two_Sorted_Arrays
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 14:15:10

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "Median_of_Two_Sorted_Arrays.cpp"

class Median_of_Two_Sorted_ArraysTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;
public:
    Median_of_Two_Sorted_ArraysTest() {}
    void setUp() {}
    void test1() 
    {
        int A[] = {1, 3, 5, 7, 9};
        int B[] = { 2, 4, 8};
        double ret = solver.findMedianSortedArrays(A, 5, B, 3);
        CPPUNIT_ASSERT(ret == 4.5);
    }
    void test2() 
    {
        // add your code here.
        int A[] = {1, 3, 5, 7, 9, 10, 20, 30};
        int B[] = { 2, 4, 8};
        double ret = solver.findMedianSortedArrays(A, 8, B, 3);
        CPPUNIT_ASSERT(ret == 7);
    }
    void test3() 
    {
        // add your code here.
        int A[] = {1, 3, 5, 7, 9, 10, 20, 30, 40};
        int B[] = { 2, 4, 8};
        double ret = solver.findMedianSortedArrays(A, 9, B, 3);
        CPPUNIT_ASSERT(ret == 7.5);
    }
    void test4() 
    {
        // add your code here.
        int A[] = {1};
        int B[] = {2, 3, 4};
        double ret = solver.findMedianSortedArrays(A, 1, B, 0);
        CPPUNIT_ASSERT(ret == 1);
    }
    void test5() 
    {
        // add your code here.
        int A[] = {1, 3, 5, 7, 9, 10, 20, 30, 40};
        int B[] = { 2, 4, 8};
        double ret = solver.findMedianSortedArrays(A, 2, B, 0);
        CPPUNIT_ASSERT(ret == 2);
    }
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Median_of_Two_Sorted_ArraysTest>(
                "test1", &Median_of_Two_Sorted_ArraysTest::test1));
    suite->addTest(new CppUnit::TestCaller<Median_of_Two_Sorted_ArraysTest>(
                "test2", &Median_of_Two_Sorted_ArraysTest::test2));
    suite->addTest(new CppUnit::TestCaller<Median_of_Two_Sorted_ArraysTest>(
                "test3", &Median_of_Two_Sorted_ArraysTest::test3));
    suite->addTest(new CppUnit::TestCaller<Median_of_Two_Sorted_ArraysTest>(
                "test4", &Median_of_Two_Sorted_ArraysTest::test4));
    suite->addTest(new CppUnit::TestCaller<Median_of_Two_Sorted_ArraysTest>(
                "test5", &Median_of_Two_Sorted_ArraysTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
