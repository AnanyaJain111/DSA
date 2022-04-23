Node* sortedMerge(Node* head1, Node* head2)  
{  
   Node* temp1 = head1;
   Node* temp2 = head2;
   Node* dummynode = new Node(-1);
   Node* ans = dummynode;

   while(temp1 != NULL && temp2 != NULL){
       if (temp1->data < temp2->data){
           ans->next = temp1;
           temp1 = temp1->next;
       }
       else{
           ans->next = temp2;
           temp2 = temp2->next;
       }
       ans = ans->next;
   }
   
   while (temp1 != NULL){
       ans->next = temp1;
       temp1 = temp1->next;
       ans = ans->next;
   }
   while (temp2 != NULL){
       ans->next = temp2;
       temp2 = temp2->next;
       ans = ans->next;
   }
   
   return dummynode->next;
}
