class Solution {
public:
    bool checkZeroOnes(string s) {
       int maxZeroes=0;
        int maxOnes=0;
        int zeroes=0;
        int ones =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                zeroes=0;
                ones++;
                maxOnes = max(ones,maxOnes);
            }
            else{
                ones=0;
                zeroes++;
                maxZeroes=max(maxZeroes,zeroes);
            }
        }
        if(maxOnes>maxZeroes)
            return true;
        else
            return false;
    }
};