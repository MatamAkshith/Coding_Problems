#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    long long res = 0;
    for (int& i : arr) {
        cin >> i;
        res += i;
    }
    cout << -res << '\n';
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