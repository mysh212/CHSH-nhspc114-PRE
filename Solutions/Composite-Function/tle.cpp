#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, a, b, x;
    cin >> n >> m >> a >> b >> x;

    ll ca = 1, cb = 0;
    for (int i = 0; i < n; i++) {
        tie(ca, cb) = make_pair((a * ca) % m, (a * cb + b) % m);
    }
    cout << (ca * x + cb) % m << '\n';
}