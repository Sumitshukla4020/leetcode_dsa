class Solution {
public:
    int minBitFlips(int start, int goal) {
        int k = start^goal;
        return __builtin_popcount(k);
    }
};