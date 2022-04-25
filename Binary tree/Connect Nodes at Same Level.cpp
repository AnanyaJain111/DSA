/*https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Tree&sortBy=submissions#*/
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int sz=q.size();
           while(sz>0){
               Node* node=q.front();
               q.pop();
               if(sz>1){
                   node->nextRight=q.front();
               }
               else{
                   node->nextRight=NULL;
               }
               
               if(node->left!=NULL){
                   q.push(node->left);
               }
               if(node->right!=NULL){
                   q.push(node->right);
               }
               sz--;
           }
           
       }
    }    
      
};
