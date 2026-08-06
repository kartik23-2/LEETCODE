class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=0;
        int col=matrix[0].size()-1;
       
        while(row<matrix.size() && col<matrix[0].size()){
            int now=matrix[row][col];
            if(now==target){
                return true;
            }
            else if(now <target){
                row=row+1;
            }
            else{
                col=col-1;
            }
        }
        return false;
    }
};