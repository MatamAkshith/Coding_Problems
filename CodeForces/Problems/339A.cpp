#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ones = "", twos = "", threes = "";
  for (char c : s) {
    if (c == '1') {
      ones += c;
    } else if (c == '2') {
      twos += c;
    } else if (c == '3') {
      threes += c;
    }
  }
  string res = "";
  for (int i = 0; i < ones.size(); i++) {
    res = res + ones[i] + "+";
  }
  for (int i = 0; i < twos.size(); i++) {
    res = res + twos[i] + "+";
  }
  for (int i = 0; i < threes.size(); i++) {
    res = res + threes[i] + "+";
  }
  if (!res.empty()) {
    res.pop_back();
  }
  cout << res << '\n';
  return 0;
}