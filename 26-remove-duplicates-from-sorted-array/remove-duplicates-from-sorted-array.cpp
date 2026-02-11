class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        vector<int> temp{};
        if (!nums.empty()) {
            temp.push_back(nums[0]);
        }
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i-1]){
                temp.push_back(nums[i]); 
            }
        }
        
        
        for(int j = 0; j < temp.size(); j++){
            nums[j] = temp[j];
        }
       
        
        return temp.size();
    }
};