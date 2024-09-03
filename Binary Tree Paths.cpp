class Solution {
public:
    
    void Paths(TreeNode* a,string path,vector<string>& V )
    {
        if(!a)return ;

        path+=to_string(a->val);
        
        if(!a->left && !a->right)              
            V.push_back(path);
        
        path+="->";
        Paths(a->left,path,V);
        Paths(a->right,path,V);

    }

public:

    vector<string> binaryTreePaths(TreeNode* a) {
        vector<string> V;
        Paths(a,"",V);
        return V;
    }
};
