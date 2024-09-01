class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        else
            TreeNode *l = invertTree(root->left);
            TreeNode *r = invertTree(root->right);

            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
            return root;
    }
};
