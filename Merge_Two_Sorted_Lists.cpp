/****************************************************************************\

    FileName: Merge_Two_Sorted_Lists.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 11:00:36

\****************************************************************************/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) { 
        ListNode head(0);
        ListNode *r = &head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                r->next = l1;
                l1 = l1->next;
            } else {
                r->next = l2;
                l2 = l2->next;
            }
            r = r->next;
        }
        if (l1 != NULL) {
            r->next = l1;
        } else if (l2 != NULL) {
            r->next = l2;
        } else {
            r->next = NULL;
        }
        return head.next;
    }
};
