class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int first=0;
        int last = colors.size()-1;
        int a=0;
        int b=0;
        while(first != last){
          if(colors[first] == colors[last]){
            last=last-1;
          }else{
            a= max(a,abs(last-first));
            last=last-1;
          }
        }
        first=0;
        last = colors.size()-1;

        while(first != last){
          if(colors[first] == colors[last]){
            first=first+1;
          }else{
            b= max(b,abs(last-first));
            first=first+1;
          }
        }
        return max(a,b);
    }
};