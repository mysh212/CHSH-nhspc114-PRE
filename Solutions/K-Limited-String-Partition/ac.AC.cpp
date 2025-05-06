#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int cnt[26] = {}, ans = 1;
    for (char c: s) {
        if (cnt[c - 'a'] >= k) {
            memset(cnt, 0, sizeof(cnt));
            ans++;
        }
        cnt[c - 'a']++;
    }
    cout << ans << '\n';
}