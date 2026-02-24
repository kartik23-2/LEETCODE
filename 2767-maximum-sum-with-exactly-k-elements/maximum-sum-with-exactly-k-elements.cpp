class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum =(((nums.back()+k-1)*(nums.back()+k))/2) - (((nums.back())*(nums.back() - 1))/2);
        // for(int i = 1 ;i<=k;i++){
        //     sum += nums.back();
        //     nums.pop_back();
        //     nums.push_back(nums.back() + 1);
        // }
        // int sum =0;
        // for(int i =0; i<k;i++){
        //     sum+= nums.back()+i;
        // }
        return sum;
    }
};