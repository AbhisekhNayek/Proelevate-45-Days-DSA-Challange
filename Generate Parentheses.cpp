class Solution 
{
public:
    vector<string> generateParenthesis(int n) 
    {
        //For a given value of n we can have many ans so 
        //here we should use backtracking
        vector<string> ans;
        fnx(ans,n,0,0,"");
        return ans;
    }
    void fnx(vector<string> &ans,int n,int open,int close,string cur_str)
    {
        if(cur_str.size()==n*2)
        {
            ans.push_back(cur_str);
            return;
        }
        if(open<n) 
            fnx(ans,n,open+1,close,cur_str+"(");
        if(close<open) 
            fnx(ans,n,open,close+1,cur_str+")");
    }
};
