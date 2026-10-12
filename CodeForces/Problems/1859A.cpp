#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    int i = 1;
    vector<int> b, c;
    b.push_back(a[0]);
    while (i < n && a[0] == a[i]) {
        b.push_back(a[i]);
        i++;
    }
    while (i < n) {
        c.push_back(a[i]);
        i++;
    }
    if (c.size() && b.size()) {
        cout << b.size() << " " << c.size() << "\n";
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
        cout << "\n";
    } else {
        cout << "-1\n";
    }
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