class Solution {
   public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int ans = solve(0, n - 1, nums);
        return ans >= 0;
    }
    int solve(int l, int r, vector<int>& nums) {
        if (l == r) {
            return nums[l];
        }
        int left = nums[l] - solve(l + 1, r, nums);
        int right = nums[r] - solve(l, r - 1, nums);
        return max(left, right);
    }
};