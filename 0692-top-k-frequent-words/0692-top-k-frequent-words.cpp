class Solution {
public:
    struct comparator
    {
        bool operator() (pair<int, string>& a, pair<int, string>& b)
        {
            if(a.first == b.first) {
                return a.second < b.second;
            } else {
                return a.first > b.first;
            }
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        // create freq map
        unordered_map<string, int> mp;
        for(auto& w : words){
            mp[w]++;
        }
        // choose top k strings
        priority_queue<pair<int, string>, vector<pair<int, string>>, comparator> pq;
        for(auto i : mp){
            pq.push({i.second, i.first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        // store top k strings in array
        vector<string> ans;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};