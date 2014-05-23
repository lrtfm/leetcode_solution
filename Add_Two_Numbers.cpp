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
        bool f = false;

        ListNode *ret;
        ListNode *p;
        ListNode *s = l2;
        while ( l1 != NULL && l2 != NULL )
        {
            c = l1->val + l2->val + c;
            if (f == false) {
                ret = l1;
                ret->val = c%10;
                p = ret;
                f = true;
            }
            else
            {
                p->next = l1;
                p = p->next;
                p->val = c%10;
            }
            l1 = l1->next;
            l2 = l2->next;
            p->next = NULL;
            c = c/10;
        }

        ListNode* tmp = (l1 != NULL) ? l1 : l2;
        while( tmp != NULL )
        {
            c = tmp->val + c;
            p->next = tmp;
            p = p->next;
            tmp = tmp->next;
            p->val = c%10;
            p->next = NULL;
            c = c/10;

        }

        if (c != 0)
        {
            p->next = s;
            p = p->next;
            p->val = c;
            p->next = NULL;
        }
        
        return ret;
    }
};
