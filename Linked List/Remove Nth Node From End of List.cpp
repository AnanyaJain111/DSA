class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            return nullptr;
        }
        ListNode* p=head;
        int count=0;
        while(p){
            count++;
            p=p->next;
        }
        p=head;
        if(count==n){
                return p->next; 
        }
        int m=count-n-1;
        //p=head;
        while(m){
            p=p->next;
            m--;
        }
        if(p->next){
            p->next=p->next->next;
        }
        
        return head;
        
        
    }
};
