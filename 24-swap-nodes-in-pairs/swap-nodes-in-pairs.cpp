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
    ListNode* swapPairs(ListNode* head) {
        int cnt=0;
        ListNode*temp=head;
        while(cnt<2){
           if(temp==NULL){
            return head;
           }
           cnt++;
           temp=temp->next;
        }
        ListNode*prev=swapPairs(temp);
        temp=head;
        ListNode*ne=temp->next;
        temp->next=prev;
        ne->next=temp;
        return ne;
    }
};