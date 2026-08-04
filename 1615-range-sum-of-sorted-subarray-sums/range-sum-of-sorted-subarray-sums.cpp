class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        int l=0;
        int  r=l;
        long long sum =0;
        while(l<nums.size()){
            int sum =0;
            while(r<nums.size()){
                
                sum+=nums[r];
                ans.push_back(sum);
                r++;
            }
            l++;
            r=l;    
        }
        sum=0;
        sort(ans.begin(),ans.end());
        for(int i=left-1;i<right;i++){
          sum+=ans[i];
        }
        return sum%1000000007;
    }
};