class Solution {
public:

    int getHeight(TreeNode *root)
    {
        if(!root)
            return 0;
        else
            return 1 + max(getHeight(root->left) , getHeight(root->right));
    }

    bool isBalanced(TreeNode* root) 
    {
        if(!root)
            return true;
        
        int left_len = getHeight(root->left);
        int right_len = getHeight(root->right);

        if(abs(left_len - right_len) > 1)
        {
            return false;
        }
        else
        {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
};
