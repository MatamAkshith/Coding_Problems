class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        int maxi = 0;
        for (int i = 1; i < n; i++) {
            int curr = 0;
            mini = min(mini, prices[i]);
            curr = max(curr, prices[i] - mini);
            mini = prices[i];
            maxi += curr;
            curr = 0;
        }
        return maxi;
    }
};