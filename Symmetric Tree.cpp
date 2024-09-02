class Solution {
public:

    bool checkSymmetric(TreeNode *t1, TreeNode *t2)
    {
        if(t1 == NULL && t2 == NULL)
        {
            return true;
        }

        if(t1 == NULL || t2 == NULL)
        {
            return false;
        }

        return (t1->val == t2->val) && checkSymmetric(t1->left, t2->right) && checkSymmetric(t1->right, t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return checkSymmetric(root, root);
    }
};
