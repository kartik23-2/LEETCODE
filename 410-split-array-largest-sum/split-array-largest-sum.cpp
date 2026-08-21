class Solution {
public:
    int guess(vector<int>& nums, int mid,int k) {
        int sum=0;
        int count=1;
        for(int i=0;i<nums.size();i++){
          if(sum+nums[i]>mid){
            count++;
            sum=nums[i];
            if(count>k){
                return false;
            }
          }
          else{
            sum+=nums[i];
          }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > low) {
                low = nums[i];
            }
        }

        int high = 0;
        for (int i = 0; i < nums.size(); i++) {
            high += nums[i];
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (guess(nums, mid,k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return high+1;
    }
};