class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string final="";
        string temp="";
        for(int i=0;i<n;i++){
            if(i==n-1){
                temp+=s[i];
                reverse(temp.begin(), temp.end());
                final+=temp;
                break;
            }
            if(s[i]==' '){
                reverse(temp.begin(), temp.end());
                final+=temp;
                temp="";
                final+=' ';
            }
            else
            temp+=s[i];
            
        }
        
        return final;
        
    }
};