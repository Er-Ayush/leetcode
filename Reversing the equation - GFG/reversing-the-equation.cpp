//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
              int n=s.size();
            //cout<<n<<endl;
            reverse(s.begin(),s.end());
            char temp=0;
            for(int i=1;i<n;i++)
            {
                    if((s[i-1]=='0'||s[i-1]=='1'||s[i-1]=='2'||s[i-1]=='3'||s[i-1]=='4'||s[i-1]=='5'||s[i-1]=='6'||s[i-1]=='7'||s[i-1]=='8'||s[i-1]=='9')&&(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'))
                    {
                        temp=s[i-1];
                        s[i-1]=s[i];
                        s[i]=temp;
                    }
            }
            return s;
           
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends