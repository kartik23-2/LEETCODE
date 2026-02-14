class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        gain.insert(gain.begin(), 0);
        for(int i =1;i<gain.size(); i++){
           gain[i]= gain[i]+gain[i-1];

        }
        int p = gain[0];
         for(int i =1;i<gain.size(); i++){
           if (gain[i] > p){
            p = gain[i];
           }

        }
        return p;
    }
};