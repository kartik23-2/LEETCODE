class Solution {
public:
    int mirrorDistance(int n) {
        long c;
        long rev=0;
        long temp = n;
        while(temp!=0){
            c = temp%10;
            rev = (rev*10) + c;
            temp=temp/10;
        }
        return abs(n-rev);
    }
};