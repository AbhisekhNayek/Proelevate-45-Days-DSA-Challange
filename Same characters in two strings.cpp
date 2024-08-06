//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        transform(A.begin(), A.end(), A.begin(), :: tolower);
        transform(B.begin(), B.end(), B.begin(), :: tolower);
        
        int minLen = min(A.length(), B.length());
        int count=0;
        
        for(int i=0; i<minLen; i++)
        {
            if(A[i] == B[i])
            {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends
