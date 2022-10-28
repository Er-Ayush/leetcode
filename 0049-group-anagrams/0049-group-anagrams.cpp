class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>m;
        for(auto &i:strs)
        {
            string s=i;
            sort(s.begin(),s.end());
            m[s].emplace_back(i);
        }
        vector<vector<string>>ans;
        for(auto &i:m)
            ans.emplace_back(i.second);
        return ans;
        
    }
};