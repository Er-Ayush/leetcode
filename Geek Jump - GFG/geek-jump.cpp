//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n+1,-1);
        return help(n-1,dp,height);
        // return dp[n];
    }
    int help(int n,vector<int> &dp,vector<int> &height){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int left=help(n-1,dp,height)+abs(height[n]-height[n-1]);
        int right=INT_MAX;
        if(n>1){
             right=help(n-2,dp,height)+abs(height[n]-height[n-2]);
        }
        return  dp[n]=min(left,right);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends