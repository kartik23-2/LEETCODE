class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int result=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int max_dif = INT_MAX;
        for(int i =0; i<nums.size()-2; i++){
            int left =i+1;
            int right=nums.size()-1;
                while(left<right){
                   int sum = nums[left]+nums[right]+nums[i]; 
                   int dif = abs(sum-target);
                    
                  
                   if(dif<max_dif){
                    max_dif = dif;
                    result=sum;
                   }
                   if(sum<target){
                    left++;
                   }else{
                    right--;
                   }
                   
                }         
        }
        return result;       
    }
};