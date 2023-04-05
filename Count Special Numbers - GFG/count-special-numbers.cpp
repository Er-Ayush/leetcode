//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        sort(arr.begin(),arr.end());
        unordered_set<int> m;
        int answer=0;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])!=m.end())
            {
                answer++;
            }
            else
            {
                if(i+1<n && arr[i]==arr[i+1]) answer++;
                int k=arr[i];
                for(int j=arr[i];j<=arr[n-1];j=j+k)
                {
                    m.insert(j);
                }
            }
        }
        return answer;
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

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends