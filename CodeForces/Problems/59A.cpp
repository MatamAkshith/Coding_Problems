#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int low = 0, up = 0;
  for (char c : s) {
    if (islower(c)) {
      low++;
    } else {
      up++;
    }
  }
  string temp;
  if (low >= up) {
      for(char &c : s){
          c = tolower(static_cast<unsigned char>(c));
      }
  } else {
      for(char &c : s){
          c = toupper(static_cast<unsigned char>(c));
      }
  }
  cout << s << '\n';
  return 0;
}