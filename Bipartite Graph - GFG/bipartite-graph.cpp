//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    for(int i = 0;i<V;i++) color[i] = -1; 
	    bool ans=true;
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            ans=ans&&dfs(adj,0,i,color);
	        }
	    }
	    return ans;
	}
	
    bool dfs(vector<int>adj[],int col,int node,int color[]){
        color[node]=col;
        for(auto i:adj[node]){
            if(color[i]==-1){
                if(dfs(adj,!col,i,color)==false) return false;;
            }
            else if(color[i]==col) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends