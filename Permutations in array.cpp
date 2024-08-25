//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    bool isPossible(int k, std::vector<int> &arr1, std::vector<int> &arr2) {
        int n = arr1.size();
        int m = arr2.size();
        
        // Sorting arr1 in ascending order
        sort(arr1.begin(), arr1.end());
        
        // Sorting arr2 in descending order
        sort(arr2.begin(), arr2.end(), greater<int>());
        
        // Checking if the sum of pairs is greater than or equal to k
        for(int i = 0; i < n; i++) {
            if((arr1[i] + arr2[i]) < k) {
                return false;
            }
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr1, arr2;
        int num;
        while (ss >> num) {
            arr1.push_back(num);
        }
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> num) {
            arr2.push_back(num);
        }
        Solution ob;
        bool ans = ob.isPossible(k, arr1, arr2);
        if (ans) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
