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
    ListNode* reverseList(ListNode* head) {
        struct ListNode *temp1;
        struct ListNode *temp2;
        if(head==NULL)
            return head;
        temp1=head;
        if(temp1->next==NULL)
            return head;
        head=temp1->next;
        if(head->next==NULL)
        {
            temp1->next=head->next;
            head->next=temp1;
            return head;
        }
        temp2=head->next;
        temp1->next=NULL;
        while(temp2!=NULL)
        {
            head->next=temp1;
            temp1=head;
            head=temp2;
            temp2=temp2->next;
        }
        head->next=temp1;
        return head;
    }
};