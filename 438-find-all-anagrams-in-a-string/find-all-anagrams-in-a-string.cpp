class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int low=0;
        
        if(p.size()>s.size()){
            return ans;
        }
        vector<int> a(256,0);
        for(int i=0;i<p.size();i++){
            a[p[i]]++;
        }
        
        vector<int> b(256,0);
        for(int i =0;i<p.size();i++){
            b[s[i]]++;
        }
        if(a == b){
            ans.push_back(low);
        }
        
        
        for(int high =p.size();high<s.size();high++){
            b[s[high]]++;
            b[s[low]]--;
            low++;
            if(a == b){
               ans.push_back(low);
            }
            
        }
        return ans;
        
    }
};