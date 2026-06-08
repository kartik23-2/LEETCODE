class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int c =count(nums.begin(), nums.end(), pivot);
        vector<int> ans(c, pivot);
        int b=0;
        
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans.insert(ans.begin()+b, nums[i]);
                b++;
            }else if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};