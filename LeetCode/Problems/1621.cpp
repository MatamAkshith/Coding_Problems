class Solution {
   public:
    int n, k;
    const long long MOD = 1e9 + 7;
    vector<vector<vector<long long>>> dp;
    long long solve(int pos, int used, int open) {
        if (used > k) {
            return 0;
        }
        if (pos == n) {
            return (used == k && open == 0);
        }
        if (dp[pos][used][open] != -1) {
            return dp[pos][used][open];
        }
        long long ans = 0;
        if (open == 0) {
            ans += solve(pos + 1, used, 0);
            ans += solve(pos + 1, used, 1);
        } else {
            ans += solve(pos + 1, used, 1);
            ans += solve(pos, used + 1, 0);
        }
        return dp[pos][used][open] = ans % MOD;
    }

    int numberOfSets(int n, int k) {
        this->n = n;
        this->k = k;
        dp.assign(n + 1,
                  vector<vector<long long>>(k + 2, vector<long long>(2, -1)));
        return solve(0, 0, 0);
    }
};
