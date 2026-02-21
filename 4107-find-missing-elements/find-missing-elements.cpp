class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> s;
        vector<int> p;
        sort (nums.begin(),nums.end());
        for(int j = nums[0]; j <= nums.back() ;j++){
            s.push_back(j);
        }
        int pointer =0;
        for(int i =0;i<s.size();i++){
            if(nums[pointer] == s[i]){
                pointer++;
            }else{
              p.push_back(s[i]);
            }
        }
        return p;
           
        
    }
};