#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    if (k > 1) {
        cout << "YES\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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