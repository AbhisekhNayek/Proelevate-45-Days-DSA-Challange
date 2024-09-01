class Solution {
public:
    int res=0;
    int dia(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=dia(root->left);
        int rh=dia(root->right);
        res=max(res,(lh+rh));
        return(1 +max(lh,rh));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia(root);
        return res;
    }
};
