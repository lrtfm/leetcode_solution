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
        stack<int> s1;
        stack<int> s2;
        stack<int> s3;

        while(l1 != NULL)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
            
        int c = 0;
        int tmp;
        while(!s1.empty()  && !s2.empty())
        {
            tmp = s1.top() + s2.top() + c;
            s1.pop(); s2.pop();
            c = tmp/10;
            tmp = tmp%10;
            s3.push(tmp);
        }

        while(!s1.empty())
        {
            tmp = s1.top() + c;
            s1.pop(); 
            c = tmp/10;
            tmp = tmp%10;
            s3.push(tmp);
        }

        while(!s2.empty())
        {
            tmp = s2.top() + c;
            s2.pop();
            c = tmp/10;
            tmp = tmp%10;
            s3.push(tmp);
        }
            
        if (c != 0)
        {
            s3.push(c);
        }

        if (s3.empty())
        {
            return NULL;
        }
            
        ListNode *ret = new ListNode(s3.top());
        s3.pop();
        ListNode *p = ret;
        while(!s3.empty())
        {
            p->next =  new ListNode(s3.top());
            p = p->next;
            s3.pop();
        }

        return ret;
    }
};
