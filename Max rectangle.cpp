//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

#include <vector>
#include <stack>
#include <algorithm>
#include <climits>

#define MAX 1000
class Solution{
  public:
     int largestArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        int maxArea = 0;
        int i = 0;

        while (i < n) {
            if (s.empty() || heights[s.top()] <= heights[i]) {
                s.push(i++);
            } else {
                int top = s.top();
                s.pop();
                int area = heights[top] * (s.empty() ? i : i - s.top() - 1);
                maxArea = max(maxArea, area);
            }
        }

        while (!s.empty()) {
            int top = s.top();
            s.pop();
            int area = heights[top] * (s.empty() ? i : i - s.top() - 1);
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }

    int maxArea(int M[MAX][MAX], int n, int m) {
        int maxArea = 0;
        vector<int> height(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (M[i][j] == 1)
                    height[j]++;
                else
                    height[j] = 0;
            }
            int area = largestArea(height);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends
