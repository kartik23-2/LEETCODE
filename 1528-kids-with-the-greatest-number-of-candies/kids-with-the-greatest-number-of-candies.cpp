class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int temp = candies[0];
        vector<bool> result(candies.size());
        for(int i =1;i<candies.size();i++){
          if(candies[i]> temp){
            temp = candies[i];
          }
        }
          for(int i =0;i<candies.size();i++){
          if(candies[i] + extraCandies>= temp){
            result[i] = true;
          }else{
            result[i] = false;
          }
        }
        return result;
    }
};