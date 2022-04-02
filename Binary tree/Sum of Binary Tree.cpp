long int sumBT(Node* root)
{
    // Code here
    int sum=0;
    if(root==NULL){
        return 0;
    }
    int l= sumBT(root->left);
    int r= sumBT(root->right);
    sum= l+r+ root->key;
    
    return sum;
}
