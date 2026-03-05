class Solution {
public:
    int minOperations(string s) {
    //     int count=0;
    //     if(s.length() == 1){
    //         return 1;
    //     }
    //     for(int i =1;i<s.length();i++){
    //     if(s[i] == s[i-1]){
    //         count++;
    //         if(s[i]=='1'){
    //             s[i] = '0';
    //         }else{
    //             s[i] = '1';
    //         }
    //     }
    // }
    // return count;
//101010101010
//010101010101
int count1=0;
int count2 =0;
for(int i =0;i<s.length();i++){
    if(i%2 == 0){
        if(s[i] != '1')
        count1++;
        if(s[i] != '0'){
            count2++;
        }
    }else{
        if(s[i] != '0')
        count1++;
        if(s[i] != '1'){
            count2++;
        }
    }
    
}return min(count1,count2);



    }
};