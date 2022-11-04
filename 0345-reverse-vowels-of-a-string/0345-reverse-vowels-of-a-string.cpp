class Solution {
public:
    string reverseVowels(string s) {
       vector<char> vow;
       vector<char> con;
       int n=s.size();
        int j=n-1;
        int i=0;
        int pp=n-1;
        while(i<j){
          if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' ||                    s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
              
                for(int k=pp;k>i;k--){
                    pp--;
                    j--;
                 if(s[k]=='a' || s[k]=='A' || s[k]=='e' || s[k]=='E' || s[k]=='i' || s[k]=='I'                        || s[k]=='o' || s[k]=='O' || s[k]=='u' || s[k]=='U'){
                     char q=s[i];
                     s[i]=s[k];;
                     s[k]=q;
                     break;
                     
                   }
                    
                }
            }
            i++;
        }
        return s;
    }
};