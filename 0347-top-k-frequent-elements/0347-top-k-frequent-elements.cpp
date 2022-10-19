class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>mp;
        for(auto i:m){
            mp.push_back({i.second,i.first});
        }
        sort(mp.rbegin(),mp.rend());
        for(int i=0;i<k;i++){
            v.push_back(mp[i].second);
        }
        return v;
    }
};