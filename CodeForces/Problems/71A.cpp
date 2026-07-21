#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    int len = arr[i].length();
    if (len > 10) {
      string res = arr[i][0] + to_string(len - 2) + arr[i][len - 1];
      cout << res << '\n';
    } else {
      cout << arr[i] << '\n';
    }
  }
  return 0;
}