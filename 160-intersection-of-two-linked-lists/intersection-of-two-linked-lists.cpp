class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>m1;
        unordered_map<ListNode*,int> m2;
        ListNode*temp=headA;
        while(temp!=NULL){
            m1[temp]=temp->val;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            m2[temp]=temp->val;
            temp=temp->next;
        }
       
        temp=headB;
        while(temp!=NULL)
       {
       if( m1.find(temp)!=m1.end()){
            return temp;
        }
        temp=temp->next;
       }
       return NULL;
    }
};