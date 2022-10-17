class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> m;
        int n=sentence.size();
        for(int i=0;i<n;i++){
            m[sentence[i]]++;
        }
        for(char i='a';i<='z';i++){
            if(m[i]<1) return false;
        }
        return true;
    }
};