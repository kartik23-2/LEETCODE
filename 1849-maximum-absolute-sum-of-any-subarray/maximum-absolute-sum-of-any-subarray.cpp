class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best = nums[0];
        int ans = nums[0];
        for(int i =1;i<nums.size();i++){
            if(best+nums[i]>=nums[i]){
                best=best+nums[i];
            }else{
                best=nums[i];
            }
            ans=max(ans,best);
        }
        
        int best1 = nums[0];
        int ans1 = nums[0];
        for(int i =1;i<nums.size();i++){
            if(best1+nums[i]<=nums[i]){
                best1=best1+nums[i];
            }else{
                best1=nums[i];
            }
            ans1=min(ans1,best1);
        }
        return max(ans,abs(ans1));
    }
};