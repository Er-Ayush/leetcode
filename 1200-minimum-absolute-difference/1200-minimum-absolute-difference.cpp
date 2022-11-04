class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int a=INT_MAX;
        for(int i=0;i<n-1;i++){
            a=min(a,(arr[i+1]-arr[i]));
        }
         vector<vector<int>> ans;
         vector<int> v;
        for(int i=0;i<n-1;i++){
            v.clear();
            if((arr[i+1]-arr[i])==a){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};