class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size()){
            return false;
        }
        int n =s.size();
        for(int i=0;i<n;i++){
            s.push_back(s[i]);
        }
        if(s.find(goal) != string::npos){
            return true;
        }
        return false;
    }
};