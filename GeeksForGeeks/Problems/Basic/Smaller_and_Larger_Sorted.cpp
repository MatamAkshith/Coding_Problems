class Solution {
public:
  vector<int> getMoreAndLess(vector<int> &arr, int target) {
    // code here
    int n = arr.size();

    int less = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    int great = arr.end() - lower_bound(arr.begin(), arr.end(), target);

    return {less, great};
  }
};