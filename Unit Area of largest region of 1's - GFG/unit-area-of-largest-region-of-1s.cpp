//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findMaxArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans=max(ans,dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>& grid,int i,int j){

        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return dfs(grid,i+1,j)+ dfs(grid,i-1,j)+ dfs(grid,i,j-1)+ dfs(grid,i,j+1)+ dfs(grid,i+1,j+1) + dfs(grid,i+1,j-1) + dfs(grid,i-1,j+1) + dfs(grid,i-1,j-1) +1;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends