class Solution {
public:
    int maxSubArray(vector<int>& nums) {
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
        return ans;
    }
};