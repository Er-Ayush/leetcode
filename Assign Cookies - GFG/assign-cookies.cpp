//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(int N, int M, vector<int> &g, vector<int> &s) {
        // code here
       sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int sum = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (j < g.size())
            {
                if (s[i] >= g[j])
                {
                    j++;
                    sum++;
                }
                else
                {
                    continue;
                }
            }
        }
        return sum;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> greed(N), sz(M);
        for (int i = 0; i < N; i++) {
            cin >> greed[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> sz[i];
        }
        Solution obj;
        cout << obj.maxChildren(N, M, greed, sz) << endl;
    }
    return 0;
}
// } Driver Code Ends