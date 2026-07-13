class Solution {
public:
    int ones(vector<int>a){
        
        return a[1];
    }
    int longestOnes(vector<int>& nums, int k) {
        int low=0,res=INT_MIN;
        vector<int>hash(2,0);
        for(int high =0;high<nums.size();high++){
            hash[nums[high]]++;
            int len =high-low+1;
            int maxc=ones(hash);
            int dif = len-maxc;
            while(dif > k){
                hash[nums[low]]--;
                low++;
                len =high-low+1;
             maxc=ones(hash);
             dif = len-maxc;
            }
             len =high-low+1;
            res = max(res,len);

        }
        return res;
    }
};