class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int res1=-1;
        int low=0;
        int high =nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                res1=mid;
                high=mid-1;
            }
        }
        res.push_back(res1);
        res1=-1;
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                res1=mid;
                low=mid+1;
            }
        }
        res.push_back(res1);
        return res;
    }
};