class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        if (!root) {
            return 0;
        }
        
        if (root->val >= low && root->val <= high) {
            // Current node is within the range
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        } else if (root->val < low) {
            // Current node's value is less than low, so move to the right subtree
            return rangeSumBST(root->right, low, high);
        } else {
            // Current node's value is greater than high, so move to the left subtree
            return rangeSumBST(root->left, low, high);
        }
    }
};
