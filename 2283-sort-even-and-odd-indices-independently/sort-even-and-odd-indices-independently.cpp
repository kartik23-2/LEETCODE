class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n =nums.size();
        vector <int> odd;
        vector <int> even;
          for(int i=0;i<nums.size();i++){
            if(i % 2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
            
          }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            nums.clear();
            for(int i=0;i<n;i++){
                if(i % 2==0){
                nums.push_back(even[i/2]);
            }else{
                nums.push_back(odd[odd.size()-1-i/2]);
            }
            
            }
            return nums;
    }
};