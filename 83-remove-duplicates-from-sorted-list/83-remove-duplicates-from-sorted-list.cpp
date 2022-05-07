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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(1){
            temp2=temp1->next;
            if(temp2==NULL)
                break;
            if(temp1->val==temp2->val)
            {
                temp1->next=temp2->next;
                delete temp2;
                if(temp1==NULL)
                    break;
            }
            else{
                temp1=temp2;
            }
        }
        return head;
    }
};