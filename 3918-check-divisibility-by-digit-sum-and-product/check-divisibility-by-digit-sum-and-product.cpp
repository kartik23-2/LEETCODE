class Solution {
public:
    bool checkDivisibility(int n) {
        
        int t=n;
        int sum=0;
        int product=1;
        while(n>0){
          sum+=n%10;
          product*=n%10;
          n=n/10;
        }
        if(t%(sum+product)==0){
            return true;
        }else{
            return false;
        }
    }
};