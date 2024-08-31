class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        stack<int> st;
        unordered_map<int, int> m;
        int n = arr.size();
        for(int i = n-1; i >= 0; i--){
             while(!st.empty() && st.top() < arr[i]){
                st.pop();
            }
            if(st.empty()){
                m[arr[i]] = -1;
            }
            else    m[arr[i]] = st.top();
            st.push(arr[i]);
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};
