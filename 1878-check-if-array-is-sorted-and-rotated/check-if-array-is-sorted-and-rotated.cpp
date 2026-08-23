class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i]>nums[i+1]){
            res++;
          }  
          if(res>2){
            return false;
          }
        }
        return true;
        

            
        
    }
};