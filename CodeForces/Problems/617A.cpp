#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int steps = 0;
  while (x > 5) {
    x -= 5;
    steps++;
  }
  cout << steps + 1 << '\n';
  return 0;
}