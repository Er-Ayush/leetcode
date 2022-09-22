class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v;
        int q=queries.size();
        int sum=0;
        for(auto i:nums){
            if(i%2==0)
            sum+=i;
            else continue;
        }
        for(int i=0;i<q;i++){
            int val = queries[i][0];
            int index = queries[i][1];
            if (nums[index] % 2 == 0) {
                sum -= nums[index];
            }
            nums[index] += val;
            if (nums[index] % 2 == 0) {
                sum += nums[index];
            }
            v.push_back(sum);
        }         
        return v;
    }
};