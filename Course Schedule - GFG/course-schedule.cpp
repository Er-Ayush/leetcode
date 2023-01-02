//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findOrder(int n, int m, vector<vector<int>> pre){
        vector<int> ans;
        vector<vector<int>> edges(n);
        for(int i=0;i<pre.size();i++){
            edges[pre[i][1]].push_back(pre[i][0]);
        }
        // for(int i=0;i<n;i++){
        //     for(auto it:edges[i]){
        //         cout<<it<<" ";
        //     }
        //     cout<<"\n";
        // }
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            // cout<<edges[i]<<"\n";
            for(auto it:edges[i]){
                // cout<<it<<" ";
                indegree[it]++;
            }
        }
        // cout<<"\n";
        // for(auto i:indegree){
        //     cout<<i<<" ";
        // }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) {
            q.push(i);
            // cout<<i<<" ";
            }
        }
        while(!q.empty()){
            int a=q.front();
            ans.push_back(a);
            q.pop();
            for(auto i:edges[a]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        if(ans.size()==n)
        return ans;
        else{
            vector<int> m;
            return m;
        }
    }

};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends