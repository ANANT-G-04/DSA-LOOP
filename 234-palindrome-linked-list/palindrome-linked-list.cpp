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
    bool isPalindrome(ListNode* head) {
      vector<int> one;
      vector<int> two;
      ListNode*temp=head;
      
      while(temp!=NULL){
        one.push_back(temp->val);
        temp=temp->next;
      }
      ListNode*curr=head;
      ListNode*prev=NULL;
      ListNode*nxt=NULL;
      while(curr!=NULL){
          nxt=curr->next;
          curr->next=prev ;
          prev=curr;
          curr=nxt;         
      }  
      temp=prev;
      while(temp!=NULL){
        two.push_back(temp->val);
        temp=temp->next;
      }
      for(int i=0;i<one.size();i++){
        if(one[i]!=two[i])
        return false;
      }
      return true;
    }
};