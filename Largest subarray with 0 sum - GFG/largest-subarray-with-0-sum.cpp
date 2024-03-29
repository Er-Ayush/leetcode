//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
       int max_size = 0; //It will store the maxsize of subarray having sum=0
    int prefix_sum = 0;
    unordered_map<int, int> first_occ;
    //This hashmap will contain the 'first occurnce' of the element.

    first_occ[0] = -1;

    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (first_occ.find(prefix_sum) == first_occ.end()) //if prefix_sum, doesnot exist in hashmap
            first_occ[prefix_sum] = i;                     // setting it's first occurance

        int curr_size = i - first_occ[prefix_sum];  //
        max_size = max(max_size, curr_size);
    }

    return max_size;
    }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends