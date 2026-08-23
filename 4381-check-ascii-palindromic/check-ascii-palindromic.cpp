class Solution {
public:
    bool isPalindromic(string s) {
        string p="";
        for(int i=0;i<s.size();i++){
            p+=bitset<8>(s[i]).to_string();
        }
        int i=0;
        int j=p.size()-1;
        while(i<j){
            if(p[i]!=p[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};