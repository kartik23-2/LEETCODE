class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> hash(nums.size()+1, 0);
        for(int i=0;i<nums.size();i++){
           hash[nums[i]]++;
        }

        int maxc = INT_MIN;
        for(int i=0;i<hash.size();i++){
            maxc=max(hash[i], maxc);
        }

        vector<vector<int>> ans(maxc);
        for(int i=0;i<maxc;i++){
            for(int j=0;j<hash.size();j++){
                if(hash[j]>0){
                    ans[i].push_back(j);
                    hash[j]--;
                }
            }
        }
        return ans;
    }
};