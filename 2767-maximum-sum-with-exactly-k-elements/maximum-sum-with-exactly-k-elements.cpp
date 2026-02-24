class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum =(((nums.back()+k-1)*(nums.back()+k))/2) - (((nums.back())*(nums.back() - 1))/2);
        
        return sum;
    }
};