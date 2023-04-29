//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
#define ll long long
    long long findNumber(long long N){
        // Code here
       return helper(N);
        
    }
    
    ll helper(ll N){
        
        if(N <= 10) return (2LL* N) - 1;
        
        ll col = ( N % 5);
        ll row = ( N / 5);
        if( col == 0){
            col = 5;
            row--;
        }
        
        
        ll ans = helper(row)*10 + (2LL * col - 1);
        return ans;
        
        
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends