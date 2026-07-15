class Solution {
public:
  int multiply(vector<int> &arr) {
    // code here
    int n = arr.size();
    int lsum = 0, rsum = 0;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
      if (i < mid) {
        lsum += arr[i];
      } else {
        rsum += arr[i];
      }
    }
    return lsum * rsum;
  }
};