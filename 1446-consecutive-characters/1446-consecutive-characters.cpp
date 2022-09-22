class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
           int temp=1;
            if(s[i]==s[i+1]){
                // temp=1;
                int ct=i;
                for(int j=ct;j<n;j++){
                    if(s[j]==s[j+1]){
                        temp++;
                        i++;
                    }
                    else break;
                }
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};