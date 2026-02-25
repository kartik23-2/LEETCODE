class Solution {
public:
    int averageValue(vector<int>& nums) {
        // vector<int> result;
        int sum = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] % 6 == 0) {
        //         result.push_back(nums[i]);
        //     }
        // }
        // for (int i = 0; i < result.size(); i++) {
        //     sum += result[i];
        // }
        // return sum / (result.size() - 1);
       for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 6 != 0) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        if(nums.size() == 0){
            return 0;
        }else{
        return sum / nums.size();
        }
    }
};