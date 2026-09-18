#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    if (a == 1) {
        cout << b * b << '\n';
        return;
    }
    if (gcd(a, b) == 1) {
        cout << a * b << '\n';
        return;
    }
    int g = gcd(a, b);
    if (g != a) {
        cout << lcm(a, b) << '\n';
        return;
    }
    cout << (b * (b / a)) << '\n';
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}