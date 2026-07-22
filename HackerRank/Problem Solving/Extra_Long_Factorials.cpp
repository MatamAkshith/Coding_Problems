#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
  vector<int> digits;
  digits.push_back(1);

  for (int i = 2; i <= n; i++) {
    int carry = 0;

    for (int j = 0; j < digits.size(); j++) {
      int prod = digits[j] * i + carry;
      digits[j] = prod % 10;
      carry = prod / 10;
    }

    while (carry) {
      digits.push_back(carry % 10);
      carry /= 10;
    }
  }

  for (int i = digits.size() - 1; i >= 0; i--)
    cout << digits[i];

  cout << '\n';
}

int main() {
  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));

  extraLongFactorials(n);

  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
