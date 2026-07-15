class Solution {
public:
    bool check(vector<int>a,vector<int>b){
       for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            return false;
        }
       }
       return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> need(256,0);
        for(int i=0;i<s1.size();i++){
            need[s1[i]]++;
        }
        
        vector<int> p(256,0);
        for(int i =0;i<s1.size();i++){
            p[s2[i]]++;
        }
        if(check(need,p)){
            return true;
        }
        int low=0;
        
        for(int high =s1.size();high<s2.size();high++){
            p[s2[high]]++;
            p[s2[low]]--;
            low++;
            if(check(need,p)){
                return true;
            }
            
        }
        return false;
        
    }
};