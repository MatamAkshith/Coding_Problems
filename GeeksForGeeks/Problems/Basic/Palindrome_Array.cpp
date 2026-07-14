class Solution {
public:
  bool isPalindrome(vector<int> &arr) {
    // code here
    int n = arr.size();
    int l = 0, r = n - 1;
    while (l <= r) {
      if (arr[l] != arr[r]) {
        return false;
      }
      l++;
      r--;
    }
    return true;
  }
};
