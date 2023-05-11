//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='?' && s[n-i-1]=='?'){
                s[n-i-1]=s[i];
            }else if(s[i]=='?' && s[n-i-1]!='?'){
                s[i]=s[n-i-1];
            }else if(s[i]!='?' && s[n-i-1]!='?' && s[i]!=s[n-i-1]){
                return -1;
            }
        }
        char x='a';
        for(int i=0;i<n;i++){
            if(s[i]!='?'){
                x=s[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]!='?') x=s[i];
            else{
                s[i]=x;
                s[n-i-1]=x;
            }
        } 
        int ans=0;
        for(int i=0;i<n-1;i++){
            int a=(s[i+1]-'a');
            int b=(s[i]-'a');
            ans+=abs(a-b);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends