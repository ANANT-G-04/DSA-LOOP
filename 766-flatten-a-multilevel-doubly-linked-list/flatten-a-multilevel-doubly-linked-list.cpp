/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return NULL;
        }
      Node*curr=head;
      //recurssive function
      while(curr!=NULL){
        if(curr->child!=NULL){
            Node*next=curr->next;
            curr->next=flatten(curr->child);
            curr->next->prev=curr;
            curr->child=NULL;
            //to find tail
            while(curr->next!=NULL){
                curr=curr->next;
            }//connect with next
                if(next!=NULL){
                    curr->next=next;
                    next->prev=curr;
                }
            
        }
        curr=curr->next;
        }
        return head;

    }
};