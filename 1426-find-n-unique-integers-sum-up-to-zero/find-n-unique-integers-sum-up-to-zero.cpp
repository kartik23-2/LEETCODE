class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;
        int i=0;
        int sum =0;
        if(n == 2){
            return {1,-1};
        }
        while(i != n-1){
            nums.push_back(i);
            sum=sum+i;
            i++;
        }
        nums.push_back(-(sum));
        return nums;
    }
};