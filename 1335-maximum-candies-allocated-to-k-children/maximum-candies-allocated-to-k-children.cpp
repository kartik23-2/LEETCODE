class Solution {
public:
    long long count(long long low,long long high,vector<int>& nums,long long k){
        int mid=(low+high)/2;
        long long c=0;
        for(int i=0;i<nums.size();i++){
            c+=nums[i]/mid;
        }
        return c;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long low=1;
        int high= *max_element(candies.begin(),candies.end());
        int res=0;
        while(low<=high){
            long long mid=(low+high)/2;
            if(count(low,high,candies,k)>=k){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
        
    }
};