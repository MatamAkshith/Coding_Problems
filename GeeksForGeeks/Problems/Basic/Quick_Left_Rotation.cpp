class Solution {

public:
  void leftRotate(vector<int> &arr, int k) {
    // Your code goes here
    int n = arr.size();
    for (int i = 0; i < k; i++) {
      int temp = arr[0];
      arr.erase(arr.begin());
      arr.push_back(temp);
    }
  }
};