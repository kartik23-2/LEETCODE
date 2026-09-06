class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long total =0;
        for(int i =0;i<nums.size();i++){
            total+=nums[i];
        }
        long long first =0;
        for(int i =0;i<nums.size()/2;i++){
            first+=nums[i];
        }
        int count =0;
        if(first>total -first){
            count+=1;
        }
        for(int i=1;i<nums.size();i++){
            first =first-nums[i-1]+nums[(i+(nums.size()/2-1))%nums.size()];
            if(first>total -first){
              count+=1;
            }
        }
        return count;

    }
};