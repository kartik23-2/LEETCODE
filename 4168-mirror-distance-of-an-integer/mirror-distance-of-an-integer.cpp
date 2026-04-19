class Solution {
public:
    int mirrorDistance(int n) {
        int c;
        int rev=0;
        int temp = n;
        while(temp!=0){
            c = temp%10;
            rev = (rev*10) + c;
            temp=temp/10;
        }
        return abs(n-rev);
    }
};