class Solution {
public:
    int countHomogenous(string s) {
        long long int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            long long int temp=0;
            if(s[i]==s[i+1]){
                temp=1;
                int ct=i;
                for(int j=ct;j<n;j++){
                    if(s[j]==s[j+1])
                    {temp++;i++;}
                    else {break;}
                }
                ans+=(temp*(temp+1)/2);
            }
            else ans++;
            
        }
        return ans%1000000007;
    }
};