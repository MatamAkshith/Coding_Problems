class Solution {
public:
  int uniqueXorTriplets(vector<int> &nums) {
    int n = nums.size();
    if (n == 1)
      return 1;
    if (n == 2)
      return 2;
    double temp = floor(log2(n)) + 1;
    int res = 1 << (int)(temp);
    return res;
  }
};