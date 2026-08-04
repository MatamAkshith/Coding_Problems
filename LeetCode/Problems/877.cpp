class Solution {
   public:
    int solve(vector<int>& piles, int i, int j) {
        if (i == j) return piles[i];

        int left = piles[i] - solve(piles, i + 1, j);
        int right = piles[j] - solve(piles, i, j - 1);

        return max(left, right);
    }

    bool stoneGame(vector<int>& piles) {
        return solve(piles, 0, piles.size() - 1) > 0;
    }
};