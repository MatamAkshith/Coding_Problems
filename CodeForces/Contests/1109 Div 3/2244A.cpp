#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0, count = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '#') {
        count++;
        maxi = max(count, maxi);
      } else {
        count = 0;
      }
    }
    int res = (maxi + 1) / 2;
    cout << res << endl;
  }
  return 0;
}