class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int suffix=sum;

        if(left==suffix-nums[0]){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            left=left+nums[i-1];
            suffix=sum-left-nums[i];
            if(left==suffix){
                return i;
            }
        }
        
        return -1;
        

    }
};