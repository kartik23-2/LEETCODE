class Solution {
public:
    int findClosest(int x, int y, int z) {
        int c =x-z;
        int d = y-z;
        if(c < 0){
            c = -c;
        }
        if(d < 0){
            d = -d;
        }
        if(c > d){
            return 2;
        }else if(c == d){
            return 0;
        }else{
            return 1;
        }
    }
};