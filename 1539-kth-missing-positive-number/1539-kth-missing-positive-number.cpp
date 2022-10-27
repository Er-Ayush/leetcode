class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int p=1000000;
        p++;
        vector<int> v(p,0);
        for(int i=0;i<n;i++){
            v[arr[i]]=1;
            
        }
        // for(auto i:v){
        //     cout<<i<<" ";
        // }
        vector<int> ans;
        for(int i=1;i<p;i++){
            if(v[i]==0) ans.push_back(i);
        }
        return ans[k-1];
        // return 1;
    }
};