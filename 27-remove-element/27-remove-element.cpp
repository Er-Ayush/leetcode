class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
         map<int,int> m;
        for(int k=0;k<nums.size();k++){
            m[nums[k]]++;
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[i++]=nums[j];
            }
        }
        return nums.size()-m[val];
    }
};