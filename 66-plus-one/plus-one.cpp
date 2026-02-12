class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        
        while(last >= 0 && digits[last] == 9){
                digits[last] = 0;
                last --;
        }
         
         if(last < 0){
             digits.insert(digits.begin(), 1);
             return digits;
         }else{
         digits[last] += 1;
         return digits;         }
         
    }
};
