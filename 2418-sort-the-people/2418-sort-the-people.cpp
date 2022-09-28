class Solution {
    
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>> v;
        int n=names.size();
       for(int i=0;i<names.size();i++){
           v.push_back(make_pair(heights[i],names[i]));
       }
        sort(v.rbegin(),v.rend());
        vector<string> ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
    
};