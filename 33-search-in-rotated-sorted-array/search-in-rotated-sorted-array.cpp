class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size() - 1;
        int mid = (first + last) / 2;
        while (first <= last) {
            if (nums[mid] == target) {
               return mid;
            } else {
                if (nums[first] <= nums[mid]) {
                    if (target >= nums[first] && target < nums[mid]) {
                        last = mid - 1;
                    } else {
                        first = mid + 1;
                    }
                } else {
                    if (target > nums[mid] && target <= nums[last]) {
                        first = mid + 1;
                    } else {
                        last = mid - 1;
                    }
                } 
            }
            mid = (first + last)/2;
        }
    return -1;
    }
};