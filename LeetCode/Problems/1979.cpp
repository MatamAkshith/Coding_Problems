class Solution {
public:
  int gcd(int a, int b) {
    if (a == 0) {
      return b;
    }
    return gcd(b % a, a);
  }
  int findGCD(vector<int> &nums) {
    int n = nums.size();
    int mini = nums[0], maxi = nums[0];
    for (int i = 1; i < n; i++) {
      mini = min(mini, nums[i]);
      maxi = max(maxi, nums[i]);
    }
    int res = gcd(mini, maxi);
    return res;
  }
};