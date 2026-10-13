#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n &&
            s[i + 2] == '.') {
            flag = true;
            break;
        }
        if (s[i] == '.') {
            total++;
        }
    }
    if (flag) {
        cout << 2 << '\n';
    } else {
        cout << total << '\n';
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}