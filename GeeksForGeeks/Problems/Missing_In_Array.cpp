class Solution {
public:
  int missingNum(vector<int> &arr) {
    // code here
    int n = arr.size() + 1;
    long long sum = (1LL * n * (n + 1)) / 2;
    int tsum = 0;
    for (int i = 0; i < n - 1; i++) {
      tsum += arr[i];
    }
    return sum - tsum;
  }
};