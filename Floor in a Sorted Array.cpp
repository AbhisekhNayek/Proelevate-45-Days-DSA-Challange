//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &a, long long n, long long x) {

        // Your code here
        int l = 0;
        int h = n-1;
        
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(a[mid] == x)
            {
                return mid;
            }
            else if(a[mid] < x)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return h;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends
