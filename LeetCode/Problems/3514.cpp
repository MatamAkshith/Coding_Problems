class Solution {
public:
  int uniqueXorTriplets(vector<int> &nums) {
    int maxv = 0;
    for (int x : nums)
      maxv |= x;

    int shift = (maxv == 0 ? 0 : 32 - __builtin_clz(maxv));
    int n = 1 << shift;

    vector<long long> f(n, 0);
    for (int x : nums)
      f[x] = 1;

    auto fwht = [&](vector<long long> &a) {
      for (int len = 1; len < n; len <<= 1) {
        for (int i = 0; i < n; i += (len << 1)) {
          for (int j = 0; j < len; j++) {
            long long u = a[i + j];
            long long v = a[i + j + len];
            a[i + j] = u + v;
            a[i + j + len] = u - v;
          }
        }
      }
    };

    fwht(f);

    // Cube each coefficient.
    for (int i = 0; i < n; i++)
      f[i] = f[i] * f[i] * f[i];

    fwht(f);

    // Divide by n (inverse FWHT) and count reachable XOR values.
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (f[i] / n != 0)
        ans++;
    }

    return ans;
  }
};