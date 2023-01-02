//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>> vp[N];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            vp[u].push_back({v,w});
        }
        queue<int> q;
        vector<int> indegree(N,0);
        for(int i=0;i<N;i++){
            for(auto j: vp[i]){
                indegree[j.first]++;
            }
        }
        for(int i=0;i<N;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            topo.push_back(f);
            for(auto i:vp[f]){
                indegree[i.first]--;
            if(indegree[i.first]==0) q.push(i.first);
            }
        }
        // for(auto i:topo){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        vector<int> dist(N);
        for(int i=0;i<N;i++) dist[i]=1e9;
        dist[0]=0;
        
        for(int k=0;k<topo.size();k++){
               int a=topo[k];
           
           for(auto i:vp[a]){
               int b=i.first;
               int w=i.second;
               if(dist[a]+w<dist[b]){
                   dist[b]=dist[a]+w;
               }
           }
            
        }
        for(int i=0;i<dist.size();i++){
            if(dist[i]==1e9){
                dist[i]=-1;
            }
        }
        return dist;
        
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends