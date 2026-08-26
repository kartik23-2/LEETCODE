class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size(),0);
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int suffix=sum;

        if(prefix[0]==suffix-nums[0]){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
            suffix=sum-prefix[i]-nums[i];
            if(prefix[i]==suffix){
                return i;
            }
        }
        
        return -1;
        

    }
};