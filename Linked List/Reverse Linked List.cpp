class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=NULL;
        ListNode* curr=head;
        ListNode* temp;
        while(curr){
            temp=curr->next;
            curr->next=p;
            p=curr;
            curr=temp;
        }
        return p;      
        
    }
};
