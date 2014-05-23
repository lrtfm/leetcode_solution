/****************************************************************************
    FileName: Add_Two_Numbers.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 17:38:42

\****************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
    {
        int c = 0;
        int tmp;
        ListNode *ret = new ListNode(0);
        ListNode *p = ret;
        while ( l1 != NULL && l2 != NULL )
        {
            tmp = l1->val + l2->val + c;
            l1 = l1->next;
            l2 = l2->next;
            c = tmp/10;
            tmp = tmp%10;
            p->next = new ListNode(tmp);
            p = p->next;
        }

        while( l1 != NULL )
        {
            tmp = l1->val + c;
            c = tmp/10;
            tmp = tmp%10;
            p->next = new ListNode(tmp);
            p = p->next;
        }

        while( l2 != NULL )
        {
            tmp = l2->val + c;
            c = tmp/10;
            tmp = tmp%10;
            p->next = new ListNode(tmp);
            p = p->next;
        }
        if (c != 0)
        {
            p->next = new ListNode(c);
            p = p->next;
        }

        
        p = ret;
        ret = ret->next;   
        delete p;
        return ret;
    }
};
