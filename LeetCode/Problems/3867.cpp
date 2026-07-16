class Solution {
public:
  long long gcd(long long a, long long b) {
    if (a == 0) {
      return b;
    }
    return gcd(b % a, a);
  }
  long long gcdSum(vector<int> &nums) {
    int n = nums.size();
    int maxi = 0;
    vector<int> prefixGcd;
    for (int i = 0; i < n; i++) {
      maxi = max(maxi, nums[i]);
      prefixGcd.push_back(gcd(nums[i], maxi));
    }
    sort(prefixGcd.begin(), prefixGcd.end());
    int r = n - 1;
    long long sum = 0;
    for (int i = 0; i < n / 2; i++) {
      sum += gcd(prefixGcd[i], prefixGcd[r]);
      r--;
    }
    return sum;
  }
};