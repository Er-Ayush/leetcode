class Solution {
public:
    bool checkOnesSegment(string s) {
        int a=s.size()-1;
        int ct=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ct++;
                for(int j=i+1;j<s.size();j++){
                    
                    if(s[j]==s[i] && s[i]=='1'){
                        i++;
                    }
                    else break;
                }
            }
            
        }
        if(ct>1) return false;
        else return true;
    }
};