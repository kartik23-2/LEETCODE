class Solution {
public:
    
    bool check(vector<int>a,vector<int>b){
       for(int i=0;i<a.size();i++){
        if(a[i]<b[i]){
            return false;
        }
       }
       return true;
    }
    
    string minWindow(string s, string t) {
        if(t.size() > s.size()){
            return "";
        }
        int low =0;
        int start =0, minc = INT_MAX;
        vector<int> f(256,0);
        vector<int> need(256,0);
        for(int i=0;i<t.size();i++){
            need[t[i]]++;
        }
        vector<int>p(256,0);
        for(int i=0;i<t.size();i++){
            p[t[i]]++;
        }
        for(int high = 0;high<s.size();high++){
            f[s[high]]++;

            while(check(f,p)){
                if(high-low+1<minc){
                    minc=high-low+1;
                    start=low;
                }
                f[s[low]]--;
                low++;
            }
            
        }
        if(minc == INT_MAX){
            return "";
        }
        return s.substr(start,minc);
        
    }
};