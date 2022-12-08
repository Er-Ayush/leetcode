//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void SieveOfEratosthenes(int n,vector<int>&primes)

    {

        bool prime[n + 1];

        memset(prime, true, sizeof(prime));

     

        for (int p = 2; p * p <= n; p++) {

            if (prime[p] == true) {

                primes.push_back(p*p);

                for (int i = p * p; i <= n; i += p)

                    prime[i] = false;

            }

        }

    }

    vector<int> threeDivisors(vector<long long> query, int q)

    {

        int maxi= query[0];

        for(int i = 0;i<q;i++){

            if(maxi<query[i]){

                maxi = query[i];

            }

        }

        vector<int>primes;

        SieveOfEratosthenes(maxi,primes);

        vector<int>ans;

        for(int i =0;i<q;i++){

            int count = 0;

            for(int j = 0;j<primes.size();j++){

                if(primes[j]<=query[i]){

                    count++;

                }

                else{

                    break;

                }

            }

            ans.push_back(count);

        }

        return ans;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends