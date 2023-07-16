//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V]={0};
        int PathVis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(ischeck(i,vis,PathVis,adj)) return true;
            }
        }
        return false;
    }
    
    bool ischeck(int start,int vis[],int PathVis[],vector<int> adj[]){
        if(vis[start]!=-1){
            vis[start]=1;
            PathVis[start]=1;
        }
        
        for(auto i:adj[start]){
            if(!vis[i]){
                if(ischeck(i,vis,PathVis,adj)) return true;
            }
            else{
                if(PathVis[i]==1) return true;
            }
        }
        
        PathVis[start]=0;
        return false;
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends