class Solution {
public:
    int concatenatedBinary(int n) {
        long long result = 0;
        int mod = 1e9 + 7;

        for(int i = 1; i <= n; i++) {

            int length = 32 - __builtin_clz(i);

            result = ((result << length) % mod + i) % mod;
        }

        return result;
    }
};