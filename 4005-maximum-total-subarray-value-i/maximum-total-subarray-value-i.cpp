class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();

        long long mini = nums[0];
        long long maxi = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] < mini)
                mini = nums[i];

            if (nums[i] > maxi)
                maxi = nums[i];
        }

        return 1LL * k * (maxi - mini);
    }
};