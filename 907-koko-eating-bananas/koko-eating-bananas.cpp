class Solution {
public:
    long long hours(vector<int>& nums, int k) {
        int i=0;
        long long s=0;;
        while(i<nums.size()){
            if(nums[i] % k != 0){
               s+=(nums[i]/k)+1;
            }
            else{
                s+=(nums[i]/k);
            }
            i++;
        }
        return s;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>high){
                high = piles[i];
            }
        }
        int ans=high;
        while(low<=high){
            int mid = (low+high)/2;
            if(hours(piles,mid)<=h){
               ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};