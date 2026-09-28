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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=0;
        ListNode*temp=head;
        while(cnt<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            cnt++;
        }
        ListNode*prev=reverseKGroup(temp,k);
        //reversing
        cnt=0;
        temp=head;
        while(cnt<k){
            ListNode*nex=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nex;
            cnt++;
        }
     return prev;
    }
};