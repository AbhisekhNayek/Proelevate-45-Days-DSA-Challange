//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) 
    {
        int n = nums.size();
        vector<long long int> ans(n, 1);
        long long int preProd = 1, postProd = 1;
        
        // Calculate prefix products
        for(int i = 0; i < n - 1; ++i)
        {
            preProd *= nums[i];
            ans[i + 1] *= preProd;
        }
        
        // Calculate suffix products
        for(int i = n - 1; i > 0; --i)
        {
            postProd *= nums[i];
            ans[i - 1] *= postProd;
        }
        
        return ans;
    }
};




//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
