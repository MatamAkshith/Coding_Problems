
class Solution {
public:
  void swapKth(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    int l = k - 1, r = n - k;
    swap(arr[l], arr[r]);
  }
};
