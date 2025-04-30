#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int m;

struct F {
    ll a, b;
    F operator*(F rh) {
        return {a * rh.a % m, (a * rh.b + b) % m};
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x;
    F f;
    cin >> n >> m >> f.a >> f.b >> x;
    
    F ans{1, 0};
    while (n) {
        if (n & 1) {
            ans = ans * f; 
        }
        f = f * f;
        n >>= 1;
    }
    cout << (ans.a * x + ans.b) % m << '\n';
}