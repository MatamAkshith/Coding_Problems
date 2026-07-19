class Solution {
public:
  bool canReach(vector<int> &start, vector<int> &target) {
    int a = (start[0] + start[1]) % 2;
    int b = (target[0] + target[1]) % 2;
    if (a == b) {
      return true;
    }
    return false;
  }
};
©leetcode