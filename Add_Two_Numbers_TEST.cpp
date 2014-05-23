/****************************************************************************
    FileName: Add_Two_Numbers_TEST.cpp
    Description: 
        test Add_Two_Numbers
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 17:38:43

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"
#include "cstdarg"
#include "Add_Two_Numbers.cpp"

ListNode* cList(int n, ...)
{
    ListNode* ret;
    ListNode* p;
    va_list arg_ptr;
    va_start(arg_ptr, n);
    for (int i = 0; i < n; ++i) {
        int value = va_arg(arg_ptr, int);
        if (i == 0) {
            ret = new ListNode(value);
            p = ret;
            continue;
        }
        p->next = new ListNode(value);
        p = p->next;
    }
    va_end(arg_ptr);

    return ret;
} 
void freeList(ListNode* p)
{
    ListNode* tmp;
    while(p != NULL) {
        tmp = p;
        p = p->next;
        delete tmp;
    }
}

struct ListNodeWapper {
    ListNode *__p;
    ListNodeWapper(ListNode* p) { __p = p;}
    bool operator==(const ListNodeWapper &x)
    {
        ListNode *a = __p;
        ListNode *b = x.__p;
        while (a != NULL && b != NULL)
        {
            if (a->val == b->val) {
                a = a->next;
                b = b->next;
                continue;
            }
            return false;
        }
        if (a == NULL && b == NULL) return true;
        return false;
    }
};

class Add_Two_NumbersTest : public CppUnit::TestFixture 
{
protected:
    Solution solver;
public:
    Add_Two_NumbersTest() {}
    void setUp() {}
    void test1() 
    {
        // add your code here.
        ListNode *a = cList(3, 1, 3, 4);
        ListNode *b = cList(3, 2, 4, 7);
        ListNode *ret = solver.addTwoNumbers(a, b);
        ListNode *expect = cList(3, 3, 8, 1);
        ListNodeWapper ret_w(ret);
        ListNodeWapper exp_w(expect);
        CPPUNIT_ASSERT(ret_w == exp_w);
        freeList(a); freeList(b); freeList(ret); freeList(expect);
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
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

    suite->addTest(new CppUnit::TestCaller<Add_Two_NumbersTest>(
                "test1", &Add_Two_NumbersTest::test1));
    suite->addTest(new CppUnit::TestCaller<Add_Two_NumbersTest>(
                "test2", &Add_Two_NumbersTest::test2));
    suite->addTest(new CppUnit::TestCaller<Add_Two_NumbersTest>(
                "test3", &Add_Two_NumbersTest::test3));
    suite->addTest(new CppUnit::TestCaller<Add_Two_NumbersTest>(
                "test4", &Add_Two_NumbersTest::test4));
    suite->addTest(new CppUnit::TestCaller<Add_Two_NumbersTest>(
                "test5", &Add_Two_NumbersTest::test5));
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
