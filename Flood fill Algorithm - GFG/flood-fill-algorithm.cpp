//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int ini_col=image[sr][sc];
        if(ini_col!=color)
        dfs(sr,sc,image,ini_col,color);
        return image;
    }
    void dfs(int sr,int sc,vector<vector<int>>& image,int ini_col,int color){
          
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]!=ini_col)
        return;
        
        image[sr][sc]=color;

        dfs(sr+1,sc,image,ini_col,color);
        dfs(sr-1,sc,image,ini_col,color);
        dfs(sr,sc+1,image,ini_col,color);
        dfs(sr,sc-1,image,ini_col,color);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends