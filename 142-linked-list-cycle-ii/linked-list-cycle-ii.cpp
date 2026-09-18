/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {//slow-fast approach to solve
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool search=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                search=true;
                break;
            }
        }
        if(search==false){
            return NULL;
        }
        slow=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};