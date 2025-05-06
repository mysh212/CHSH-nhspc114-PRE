#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    vector<vector<string>> shelve(MAXN);
    while (q--) {
        int t, x;
        cin >> t >> x;
        x--;
        if (t == 1) {
            string s;
            cin >> s;
            shelve[x].push_back(s);
        } else {
            int y;
            cin >> y;
            y--;
            if (y >= shelve[x].size()) {
                cout << "oh can't find anything...\n";
            } else {
                cout << shelve[x][y] << '\n';
            }
        }
    }
}