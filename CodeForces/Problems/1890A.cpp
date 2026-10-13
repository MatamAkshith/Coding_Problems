#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    if (freq.size() >= 3) {
        cout << "NO\n";
        return;
    }
    if (freq.size() == 2) {
        int f1 = freq.begin()->second;
        int f2 = next(freq.begin())->second;
        if (n % 2 != 0 && (abs(f1 - f2) != 1)) {
            cout << "NO\n";
            return;
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
