#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000000 + 7;

pair<long long, long long> fib(long long n) {
    if (n == 0) {
        return {0, 1};
    }
    auto p = fib(n >> 1);
    long long c = p.first * ((2 * p.second % MOD - p.first + MOD) % MOD) % MOD;
    long long d = (p.first * p.first % MOD + p.second * p.second % MOD) % MOD;

    if (n & 1) {
        return {d % MOD, ((c % MOD) + (d % MOD)) % MOD};
    }
    return {c % MOD, d % MOD};
}

int main() {
    long long n;
    cin >> n;
    pair<long, long> res = fib(n);
    cout << res.first << '\n';
    return 0;
}