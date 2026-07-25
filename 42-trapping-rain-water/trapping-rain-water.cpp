class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0){
            return 0;
        }
        int sum = 0;
        vector<int> left(height.size(),0);
        int leftmax = height[0];
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > leftmax) {
                leftmax = height[i];
            }
            left[i] = leftmax;
        }
        vector<int> right(height.size(),0);
        int rightmax = height[height.size() - 1];
        for (int i = height.size() - 1; i >= 0; i--) {
            if (height[i] > rightmax) {
                rightmax = height[i];
            }
            right[i] = rightmax;
        }
        for (int i = 0; i < height.size(); i++) {
            sum += (min(left[i], right[i]) - height[i]);
        }
        return sum;
    }
};