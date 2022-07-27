/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        ListNode* slow1=head;
        ListNode* slow2;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow2=slow1;
            slow1=slow1->next;
            fast=fast->next->next;
        }
        slow2->next=slow1->next;
        return head;
    }
};