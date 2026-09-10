class Solution {
   public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currmax = 0, maxi = nums[0];
        int currmin = 0, mini = nums[0];
        int total = 0;
        for (int n : nums) {
            total += n;
            currmax = max(n, currmax + n);
            maxi = max(maxi, currmax);
            currmin = min(n, currmin + n);
            mini = min(mini, currmin);
        }
        if (maxi < 0) {
            return maxi;
        }
        return max(maxi, total - mini);
    }
};