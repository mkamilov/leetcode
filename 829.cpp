class Solution {
public:
    int consecutiveNumbersSum(int N) {
        int ans = 0;
        for (int i =0; (i*i+i) < 2*N; ++i ) {
            int d = 2*i+2;
            if ((2*N-i*i-i)%d == 0) {
                ans++;
            }
        }
        return ans;
    }
};
