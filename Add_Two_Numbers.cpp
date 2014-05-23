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

        ListNode *head = new ListNode(0);
        ListNode *p = head;
        while ( l1 != NULL || l2 != NULL ) {
            if (l1 != NULL) {
                c += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                c += l2->val;
                l2 = l2->next;
            }

            p->next = new ListNode(c%10);
            p = p->next;
            c = c/10;
        }

        if (c != 0) {
            p->next = new ListNode(c);
        }

        p = head->next;
        delete head;
        
        return p;
    }
};
