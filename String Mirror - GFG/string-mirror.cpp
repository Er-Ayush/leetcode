//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        if(str.empty()){
            return str;
        }
        string ans="";
        int i=0;
        int j=str.size();
        while(i<j){
            if(i==0||str[i]<str[i-1]){
                ans=ans+str[i];
            }
            else if(str[i]==str[i-1]&&i>1){
                ans=ans+str[i];
            }
            else{
                break;
            }
            i++;
        }
        string temp=ans;
        reverse(ans.begin(),ans.end());
        return temp+ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends