class Solution {
public:
  string rearrangeString(string s, char x, char y) {
    int len = s.length();
    string xs = "", ys = "", res = "";
    for (char c : s) {
      if (c == x) {
        xs += c;
      } else if (c == y) {
        ys += c;
      } else {
        res += c;
      }
    }
    return res + ys + xs;
  }
};
©leetcode