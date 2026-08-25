class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
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
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum-ans1==0){
            return ans;
        }
        return max(ans,(sum-ans1));
    }
};