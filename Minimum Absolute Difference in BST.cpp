class Solution {
public:
    int minDiff = INT_MAX;
    int prev = -1;

    void inorderTraversal(TreeNode* root) {
        if (!root) return;

        // Traverse the left subtree
        inorderTraversal(root->left);

        // Calculate the difference between the current and previous node values
        if (prev != -1) {
            minDiff = min(minDiff, root->val - prev);
        }

        // Update the previous node value to the current one
        prev = root->val;

        // Traverse the right subtree
        inorderTraversal(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        return minDiff;
    }
};
