class Solution {
public:
  string longest(vector<string> &arr) {
    // code here
    int n = arr.size();
    int l = 0, idx = 0;
    for (int i = 0; i < n; i++) {
      int len = arr[i].length();
      if (len > l) {
        l = len;
        idx = i;
      }
    }
    return arr[idx];
  }
};
