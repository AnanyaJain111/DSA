/*https://leetcode.com/problems/convert-bst-to-greater-tree/*/
class Solution {
public:
    
    void treee(TreeNode* root, int &a){
        if(!root){
            return;
        }
        treee(root->right,a);
        root->val=a+root->val;
        a=root->val;
        treee(root->left, a);
    }
    TreeNode* convertBST(TreeNode* root) {
        int a1=0;
        treee(root, a1);
        return root;
    }
};
