class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
    vector<int> nums(num_people, 0);
    int i =0;
    int j =0;
    while(candies>0){
     i=j % num_people;
      if(candies>j){
        nums[i]+= j+1;
        candies-=j+1;
      }else{
        nums[i]+=candies;
        candies=0;
      }
      j++;
    }
    return nums;
    }
};