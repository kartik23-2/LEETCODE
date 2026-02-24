class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = player1[0];
        int sum2 = player2[0];
        for(int i =1;i<player1.size();i++){
           
            if((i-1>=0 && player1[i-1]==10) ||(i-2>=0 && player1[i-2]==10)){ 
                sum1 += 2*player1[i];
                  
            }
            // else if(player1[i]==10 && i+1 < player1.size() && i+2 == player1.size()){
            //     sum1 += player1[i] + (player1[i+1]*2);
            // }
            // else if(player1[i]==10 && i+1 == player1.size() && i+2 == player1.size()){
            //     sum1 += player1[i];
            // }
            else{
                sum1 += player1[i];
            }
        }
        for(int i =1;i<player2.size();i++){
             if((i-1>=0 && player2[i-1]==10) ||(i-2>=0 && player2[i-2]==10)){ 
                sum2 += 2*player2[i];
                  
            }
            // else if(player2[i]==10 && i+1 < player2.size() && i+2 == player2.size()){
            //     sum2 += player2[i] + (player2[i+1]*2);
            // }
            // else if(player2[i]==10 && i+1 == player2.size() && i+2 == player2.size()){
            //     sum2 += player2[i];
            // }
            else{
                sum2 += player2[i];
            }
        }
        if(sum1 > sum2){
            return 1;
        }
        else if(sum1 < sum2){
            return 2;
        }else{
            return 0;
        }
    }
};