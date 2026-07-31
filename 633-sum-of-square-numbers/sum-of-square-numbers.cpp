class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        
        int low=0;
        int high=sqrt(c);
        
        while(high>=low){
            long long sum = 1LL*low*low + 1LL*high*high;
            if(sum==c){
                return true;
            }
            if(sum<c){
                low++;
            }
            if(sum>c){
                high--;
            }
        }
        return false;
    }
    
};