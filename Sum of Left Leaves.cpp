class Solution {
public:
    int sum = 0;

    void inorder(TreeNode *root){
        if(!root)
            return;
        
        inorder(root->left);

        if ((root->left) && (!root->left->left && !root->left->right)) {
            sum += root->left->val;
        }

        inorder(root->right);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        inorder(root);
        return sum;
    }
};
