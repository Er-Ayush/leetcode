class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        int total=0;
        for(auto i:skill){
            total+=i;
        }
        if(total%(n/2)!=0) return -1;
        int pairval =total/(n/2);
        sort(skill.begin(),skill.end());
        int low=0;
        int high=n-1;
        long long ans = 0;
        while(low<high){
            if(skill[low]+skill[high]==pairval){
                ans+=skill[low]*skill[high];
            }
            else return -1;
            low++;high--;
        }
        return ans;
    }
};