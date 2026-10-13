#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& i : nums) {
        cin >> i;
    }
    if (nums[0] == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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