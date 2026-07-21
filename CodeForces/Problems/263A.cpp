#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> arr(5, vector < int > 5);
  for (int i = 0; i < 5; i++) {
    for (int j = 0; i < 5; j++) {
      cin >> arr[i][j];
    }
  }
  int a, b;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        a = i;
        b = j;
      }
    }
  }
  int res = abs(a - 2) + abs(b - 2);
  cout << res << endl;
  return 0;
}