class Solution {
public:
    bool flag = false;

    void dfs(TreeNode*root, int targetSum, int sum)
    {
        if(!root){
            return;
        }

        sum += root->val;

        if(sum == targetSum && root->left == NULL && root->right == NULL){
            flag = true;
            return;
        }
        
        dfs(root->left, targetSum, sum);
        dfs(root->right, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        dfs(root, targetSum, sum);
        return flag;
    }
};
