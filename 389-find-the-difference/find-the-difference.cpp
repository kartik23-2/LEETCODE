class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums=0;
        int sumt=0;
        for(int i=0;i<s.size();i++){
            sums+=int(s[i]);
        }
        for(int i=0;i<t.size();i++){
            sumt+=int(t[i]);
        }
        return char(sumt-sums);
    }
};