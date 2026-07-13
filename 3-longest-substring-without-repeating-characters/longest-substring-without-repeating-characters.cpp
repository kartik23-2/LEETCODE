class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        int low = 0;
        int high =0;
        int res = INT_MIN;
        unordered_map<char,int> hash;
        for(int high = 0;high<s.size();high++){
            
            hash[s[high]]++;
            
            while(hash[s[high]]>1){
                hash[s[low]]--;
                if(hash[s[low]]==0){
                    hash.erase(s[low]);
                    
                }
                low++;
            }
            int len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
};