class Solution {
public:
    int strStr(string haystack, string needle) {
        // vector<int> hash(0,256);
        int low = 0;
        // vector<int> f(0,256);
        // if(needle.size()> heystack.size()){
        //     return -1;
        // }
        // for(int i=0;i<needle.size();i++){
        //   hash[needle[i]]++;
        // }
        // for(int high= 0;high<heystack.size();high++){
        //     f[heystack[high]]++;

        // }

        for(int high = needle.size()-1;high<haystack.size();high++){
            if(haystack.substr(low,needle.size())== needle){
                return low;
            }else{
                low++;
            }
        }
        return -1;
    }
};