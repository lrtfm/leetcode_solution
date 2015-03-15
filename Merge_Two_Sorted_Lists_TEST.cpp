/****************************************************************************\

    FileName: Merge_Two_Sorted_Lists_TEST.cpp
    Description: 
        test Merge_Two_Sorted_Lists
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 11:00:36

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "common.h"

#include "Merge_Two_Sorted_Lists.cpp"

class Merge_Two_Sorted_ListsTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;
private:

    ListNode * makeList(int n, ...) {
        ListNode head(0);
        ListNode * ret = &head;
        va_list arg_ptr;
        va_start(arg_ptr, n);
        for (int i = 0; i < n; ++i) {
            int value = va_arg(arg_ptr, int);
            ret->next = new ListNode(value);
            ret = ret->next;
        }
        va_end(arg_ptr);

        return head.next;
    }    

    void freeList(ListNode *l) {
        ListNode *p = NULL;
        while (l != NULL) {
            p = l;
            l = l->next;
            delete p;
        }
    }

    int equalList(ListNode *l1, ListNode *l2) {
        while (l1 != NULL &&  l2 != NULL) {
            if (l1->val != l2->val) {
                return 0;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1 != NULL || l2 != NULL) {
            return 0;
        }
        return 1;
    }

public:
    Merge_Two_Sorted_ListsTest() {}
    void setUp() {}
    void test1() 
    {
        ListNode *l1 = makeList(3, 1, 4, 5);
        ListNode *l2 = makeList(2, 2, 7);
        ListNode *e = makeList(5, 1, 2, 4, 5, 7);
        ListNode *r;
        r = solver.mergeTwoLists(l1, l2);
        int ret = equalList(r, e);
        CPPUNIT_ASSERT(ret == 1);
        freeList(r); freeList(e);
    }
    void test2() 
    {
        ListNode *l1 = makeList(1, 1);
        ListNode *l2 = NULL;
        ListNode *e = makeList(1, 1);
        ListNode *r;
        r = solver.mergeTwoLists(l1, l2);
        int ret = equalList(r, e);
        CPPUNIT_ASSERT(ret == 1);
        freeList(r); freeList(e);
    }
    void test3() 
    {
        ListNode *l1 = makeList(5, 1, 4, 5, 8, 9);
        ListNode *l2 = makeList(2, 2, 7);
        ListNode *e = makeList(7, 1, 2, 4, 5, 7, 8, 9);
        ListNode *r;
        r = solver.mergeTwoLists(l1, l2);
        int ret = equalList(r, e);
        CPPUNIT_ASSERT(ret == 1);
        freeList(r); freeList(e);
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

    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test1", &Merge_Two_Sorted_ListsTest::test1));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test2", &Merge_Two_Sorted_ListsTest::test2));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test3", &Merge_Two_Sorted_ListsTest::test3));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test4", &Merge_Two_Sorted_ListsTest::test4));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test5", &Merge_Two_Sorted_ListsTest::test5));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test6", &Merge_Two_Sorted_ListsTest::test6));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test7", &Merge_Two_Sorted_ListsTest::test7));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test8", &Merge_Two_Sorted_ListsTest::test8));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test9", &Merge_Two_Sorted_ListsTest::test9));
    suite->addTest(new CppUnit::TestCaller<Merge_Two_Sorted_ListsTest>(
                "test10", &Merge_Two_Sorted_ListsTest::test10));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
