class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        else
            return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
