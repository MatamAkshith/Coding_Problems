class Solution {
public:
  vector<int> leaders(vector<int> &arr) {
    // code here
    int n = arr.size();
    int max = arr[n - 1];
    vector<int> res;
    res.push_back(max);
    for (int i = n - 2; i >= 0; i--) {
      if (arr[i] >= max) {
        max = arr[i];
        res.push_back(max);
      }
    }
    reverse(res.begin(), res.end());
    return res;
  }
};