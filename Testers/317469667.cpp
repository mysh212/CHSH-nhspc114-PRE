#include <bits/stdc++.h>
using namespace std;

int cover(int x1, int y1, int x2, int y2, const string &s1, const string &s2) {
    set<pair<int, int>> st;
    int x = x1, y = y1;
    st.insert({x, y});
    for (char c: s1) {
        if (c == 'E') {
            x++;
        } else if (c == 'W') {
            x--;
        } else if (c == 'N') {
            y++;
        } else {
            y--;
        }
        st.insert({x, y});
    }
    int ans = 0;
    x = x2, y = y2;
    auto it = st.find({x, y});
    if (it != st.end()) {
        ans++;
        st.erase(it);
    }
    for (char c: s2) {
        if (c == 'E') {
            x++;
        } else if (c == 'W') {
            x--;
        } else if (c == 'N') {
            y++;
        } else {
            y--;
        }
        auto it = st.find({x, y});
        if (it != st.end()) {
            ans++;
            st.erase(it);
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 10, y1 += 10, x2 += 10, y2 += 10;

    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> comb;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                comb.push_back({i, j, k});
            }
        }
    }
    int l1 = 1, l2 = 1;
    for (int i = 0; i < s1.size(); i++) {
        l1 *= 3;
    }
    for (int i = 0; i < s2.size(); i++) {
        l2 *= 3;
    }
    int ans = 0;
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < l2; j++) {
            string ns1, ns2;
            for (int k = 0; k < s1.size(); k++) {
                ns1.append(string(comb[i][2 - k], s1[k]));
            }
            for (int k = 0; k < s2.size(); k++) {
                ns2.append(string(comb[j][2 - k], s2[k]));
            }
            ans = max(ans, cover(x1, y1, x2, y2, ns1, ns2));
        }
    }
    cout << ans << '\n';
}