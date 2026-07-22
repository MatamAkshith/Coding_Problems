#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;
  int i = 1, total = 0;
  while (w--) {
    total += i * k;
    i++;
  }
  int res = 0;
  if (total <= n) {
    cout << res << '\n';
  } else {
    res = abs(total - n);
    cout << res << '\n';
  }
  return 0;
}