class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        if(n==1){
           
            return v;
        }
        for(int i=2;i<=n;i++){
            
            for(int j=1;j<i;j++){
                if(i%j==0 && j!=1) continue;
                if(__gcd(i,j)!=1) continue;
                string temp="";
                string a=to_string(j);
                string b=to_string(i);
                temp+=a;
                temp+='/';
                temp+=b;
                v.push_back(temp);
                
            }
        }
        return v;
    }
};