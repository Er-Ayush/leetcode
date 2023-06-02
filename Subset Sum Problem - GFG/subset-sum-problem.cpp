//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool help(int n,vector<int> &arr,vector<vector<int>> &dp,int sum){
       if(sum==0) return true;
        if(n==0){
            if(sum==arr[0]) {
                return true;
            }
            return false;
        }
        if(dp[n][sum]!=-1) return dp[n][sum];
        bool take=false;
        if(arr[n]<=sum){
            take=help(n-1,arr,dp,sum-arr[n]);
        }
        
        bool b=help(n-1,arr,dp,sum);
        return dp[n][sum]=take|b;
    }
    bool isSubsetSum(vector<int>arr, int sum){
      int n=arr.size();
      vector<vector<int>> dp(n,vector<int>(sum+1,-1));
      return help(n-1,arr,dp,sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends