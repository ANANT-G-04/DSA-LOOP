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
        cnt=0; 
       while(cnt<2 ){ 
        ListNode*ne=temp->next; 
        temp->next=prev; 
        prev=temp; 
        temp=ne; 
        cnt++; 
       } 
       return prev; 
    } 
}; 