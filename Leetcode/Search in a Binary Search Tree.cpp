/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int val,TreeNode*& a){
        if(!root){
            return;
        }
        if(root->val==val){
            a=root;
        }
        else if(root->val <val){
            dfs(root->right,val,a);
        }
        else if(root->val >val){
            dfs(root->left,val,a);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* a1= NULL;
        dfs(root,val,a1);
        return a1;
        
        
    }
};
