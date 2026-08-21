class Solution {
public:
    int guess(vector<int>& weights, int low, int high) {
        int mid = low + (high - low) / 2;
        int sum = 0;
        int count = 1;

        for (int i = 0; i < weights.size(); i++) {
            if (sum + weights[i] > mid) {
                count++;
                sum = weights[i];
            } else {
                sum += weights[i];
            }
        }

        return count;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > low) {
                low = weights[i];
            }
        }

        int high = 0;
        for (int i = 0; i < weights.size(); i++) {
            high += weights[i];
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (guess(weights, low, high) > days) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
    }
};