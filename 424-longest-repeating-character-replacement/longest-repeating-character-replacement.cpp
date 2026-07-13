class Solution {
public:
    int find(vector<int>& a) {
        int maxc = -1;
        for (int i = 0; i < 256; i++)
            maxc = max(maxc, a[i]);
        return maxc;
    }

    int characterReplacement(string s, int k) {
        int low = 0;
        int res = INT_MIN;

        vector<int> f(256, 0);

        for (int high = 0; high < s.size(); high++) {
            f[s[high]]++;
            int maxc = find(f);
            int len = high - low + 1;
            
            int dif = len - maxc;
            while (dif > k) {
                f[s[low]]--;
                low++;
                 maxc = find(f);
                 len = high - low + 1;
                 dif = len - maxc;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};