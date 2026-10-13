#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll& i : arr) {
        cin >> i;
    }
    map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    if (freq.size() >= 3) {
        cout << "NO\n";
        return;
    } else {
        ll f1 = freq.begin()->second;
        ll f2 = freq.rbegin()->second;
        if (n % 2 == 1 && (abs(f1 - f2) == 1)) {
            cout << "YES\n";
            return;
        } else if (f1 == f2) {
            cout << "YES\n";
            return;
        } else {
            cout << "NO\n";
        }
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
