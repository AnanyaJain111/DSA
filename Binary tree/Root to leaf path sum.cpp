/*https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1/?page=1&difficulty[]=0&status[]=unsolved&company[]=Adobe&company[]=Zoho&company[]=Wipro&company[]=TCS&company[]=Accenture&company[]=Atlassian&category[]=Tree&sortBy=submissions*/
class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(root==NULL || root->data>S){
        return 0;
    }
    if(root->left==NULL && root->right==NULL && root->data==S){
        return 1;
    }
    return hasPathSum(root->left, S-root->data) || hasPathSum(root->right,S-root->data);
}
};
