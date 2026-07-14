class Solution {
public:
  vector<int> findElements(vector<int> arr) {
    // Your code goes here
    int n = arr.size();
    vector<int> res;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
      res.push_back(arr[i]);
    }
    return res;
  }
};