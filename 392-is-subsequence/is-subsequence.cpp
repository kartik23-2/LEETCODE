class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
       
        for(int i=0;i<t.size();i++){
            if(l<s.size() && s[l]==t[i]){
             l++;
            }
        }
        if(l==s.size()){
            return true;
        }else{
            return false;
        }
    }
};