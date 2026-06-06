class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left=0;
        int right=accumulate(nums.begin()+1, nums.end(), 0);
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size()-1;i++){
         ans[i]=abs(left-right);
         left+=nums[i];
         right-=nums[i+1];
        }
        ans[ans.size()-1]=accumulate(nums.begin(), nums.end()-1, 0);
        return ans;
    }
};