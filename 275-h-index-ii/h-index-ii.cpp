class Solution {
public:
    
    int hIndex(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int res = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums.size() - mid <= nums[mid]) {
                res = nums.size() - mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};