//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i, int j,vector<vector<char>>& grid, vector<vector<bool>> &visited, int dx[], int dy[], int n, int m){
    visited[i][j]=true;
    for(int k=0; k<8; k++){
        int I=i+dx[k];
        int J=j+dy[k];
        if(I<n && J<m && I>=0 && J>=0 && grid[I][J]=='1' && !visited[I][J]){
            dfs(I,J, grid, visited, dx, dy, n ,m );
        }

    }
}


int numIslands(vector<vector<char>>& grid) {
        // Code here
        int ans=0;
        int dx[8]={0,1,1,1,0,-1,-1,-1};
        int dy[8]={1,1,0,-1,-1,-1,0,1};
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    ans++;
                    dfs(i,j, grid, visited, dx, dy, n ,m );
                }
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
