class Solution {
   public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int& x : nums) {
            if (x < 0) {
                x *= -1;
            }
        }
        sort(nums.begin(), nums.end());
        long long first = 0;
        for (int i = 0; i < n / 2; i++) {
            first += (nums[i] * nums[i]);
        }
        long long second = 0;
        for (int i = n / 2; i < n; i++) {
            second += (nums[i] * nums[i]);
        }
        return second - first;
    }
};