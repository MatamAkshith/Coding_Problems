// class Solution {
//    public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int profit = 0;
//         int mini = prices[0];
//         for (int i = 0; i < n; i++) {
//             if (prices[i] < mini) {
//                 mini = prices[i];
//             } else {
//                 if (prices[i] - mini >= 0 && prices[i] - mini > profit) {
//                     profit = prices[i] - mini;
//                 }
//             }
//         }
//         return profit;
//     }
// };
class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        for (int i = 0; i < n; i++) {
            mini = min(mini, prices[i]);
            profit = max(profit, prices[i] - mini);
        }
        return profit;
    }
};