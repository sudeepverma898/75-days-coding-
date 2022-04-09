/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        struct ListNode *slow=head;
        struct ListNode *fast=head;
        while(slow->next && fast->next)
        {
            fast=fast->next;
            slow=slow->next;
            if(fast->next!=NULL)
                fast=fast->next;
            else
                return false;
            if(slow==fast)
                return true;
        }
        return false;
       
    }
};