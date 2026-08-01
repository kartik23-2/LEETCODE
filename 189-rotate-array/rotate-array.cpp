// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n =nums.size();
//         k = k%n;
//         for(int i=0;i<n;i++){
//             nums.push_back(nums[i]);
//         }
//         nums.erase(nums.begin() + 2*n-k, nums.end());
//         nums.erase(nums.begin() + 0, nums.begin() + n-k);
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};