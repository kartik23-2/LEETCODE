class Solution {
public:
    bool isPalindrome(int x) {
         long rev =0;
        int temp = x;
while(x != 0){
  long rem = x % 10;
  rev = rev * 10 + rem;
  x /= 10;
 
}if(rev != temp || temp < 0){
    return false;
}else
return true;

    }
};