//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

    vector<int> satisfyEqn(int a[], int n) {

        int N = 2e5 + 5 ; 

        vector<pair<int,int>> mp[N] ;

        

        for(int i = 0 ; i<n ; i++){

            for(int j = i + 1 ; j<n ; j++){

                int sum = a[i] + a[j] ; 

                mp[sum].push_back({i , j}) ;

            }

        }

        

        int inf = INT_MAX ; 

        

        vector<int> ans = { inf , inf , inf , inf } ; 

        vector<int> notValid = {-1 , -1 , -1 , -1} ; 

        

        for(int sum = 0 ; sum<N ; sum++){

            auto& v = mp[sum] ; 

            if(v.size() == 0) continue ; 

            vector<int> t = {v[0].first , v[0].second , -1 , -1} ;

            for(int i = 1 ; i<v.size() ; i++){

                if(v[i].first != t[0] and v[i].first != t[1]){

                    if(v[i].second != t[0] and v[i].second != t[1]){

                        t[2] = v[i].first ;

                        t[3] = v[i].second ; 

                        break ;

                    }

                }

            }

            if(t[3] == -1) continue ; 

            ans = min(ans, t) ;

        }

        

        return ans[0] == inf ? notValid : ans ; 

    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends