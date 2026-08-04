// class Solution {
//    public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int maxi = INT_MIN, sum = 0;
//         if (n == 0) {
//             return maxi;
//         }
//         if (n == 1) {
//             return nums[0];
//         }
//         for (int i = 0; i < n; i++) {
//             sum += nums[i];
//             maxi = max(maxi, sum);
//             if (sum < 0) {
//                 sum = 0;
//             }
//         }
//         return maxi;
//     }
// };
class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr = nums[0], ans = nums[0];
        for (int i = 1; i < n; i++) {
            curr = max(nums[i], curr + nums[i]);
            ans = max(curr, ans);
        }
        return ans;
    }
};