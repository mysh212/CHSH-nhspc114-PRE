#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string convert(ll x, int k) {
    string s;
    while (x) {
        ll rem = x % k;
        if (rem < 10) {
            s.push_back(rem + '0');
        } else {
            s.push_back(rem - 10 + 'A');
        }
        x /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}
void solve() {
    ll x;
    cin >> x;
    
    vector<pair<string, ll>> ans;
    for (int i = 2; i <= 16; i++) {
        ans.push_back({convert(x, i), i});
    }
    sort(ans.begin(), ans.end());
    for (const auto &a: ans) {
        cout << a.first << ' ' << a.second << '\n';
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}