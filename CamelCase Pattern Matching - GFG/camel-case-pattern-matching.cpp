//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> dict, string Pattern) {
        // code here
       vector<string> s;
       for(auto i:dict){
           string p="";
           for(auto j:i){
               if(j>=65 && j<=90) {
                   p+=j;
                   if(p==Pattern) s.push_back(i);
               }
           
           }
       }
       if(s.size()==0){
           s.push_back("-1");
           return s;
       }
       return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends