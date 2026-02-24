class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum =0;
        for(int i = 1 ;i<=k;i++){
            sum += nums.back();
            nums.push_back(nums.back() + 1);
        }
        return sum;
    }
};