#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    int maxd = arr[0] - 0;
    for (int i = 1; i < n; i++) {
        maxd = max(maxd, arr[i] - arr[i - 1]);
    }
    int tail = 2 * (x - arr[n - 1]);
    int res = max(maxd, tail);
    cout << res << '\n';
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