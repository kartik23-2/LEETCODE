class Solution {
public:
    int titleToNumber(string columnTitle) {
        double sum=0;
        int count=0;
        for(int i= columnTitle.size()-1;i>=0;i--){
            sum =sum+((int(columnTitle[i])-64)*pow(26,count));
            count++;
        }
        return sum;
    }
};