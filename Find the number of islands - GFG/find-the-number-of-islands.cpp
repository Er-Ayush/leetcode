//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
    
    void dfs(int i,int j,vector<vector<char>>& v){
        
        if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]=='0') return;
        v[i][j]='0';
        // grid[i][j+1];
        // grid[i][j-1];
        // grid[i-1][j];
        // grid[i+1][j];
        // grid[i+1][j+1];
        // grid[i-1][j+1];
        // grid[i+1][j-1];
        // grid[i-1][j-1];
        dfs(i-1,j,v);
        dfs(i+1,j,v);
        dfs(i,j-1,v);
        dfs(i,j+1,v);
        dfs(i+1,j+1,v);
        dfs(i+1,j-1,v);
        dfs(i-1,j+1,v);
        dfs(i-1,j-1,v);
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