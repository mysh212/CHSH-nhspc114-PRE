#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x1, y1;
    int x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    auto dfs = [&](auto sf, string s, int pos, int x, int y, vector<pair<int, int>> v, vector<vector<pair<int,int>>> &p) -> void {
        
        if(pos == s.length()) {
            p.push_back(v);
            return;
        }
        int k;
        if(s[pos] == 'E') k = 0;
        else if(s[pos] == 'S') k = 1;
        else if(s[pos] == 'W') k = 2;
        else k = 3;
        for(int i = 1; i <= 3; i++) {
            x += dx[k];
            y += dy[k];
            v.push_back({x, y});
            sf(sf, s, pos+1, x, y, v, p);
        }
    };
 
    vector<pair<int, int>> a1, a2;
    vector<vector<pair<int, int>>> p1, p2;
    a1.push_back({x1, y1});
    a2.push_back({x2, y2});
    dfs(dfs, s1, 0, x1, y1, a1, p1);
    dfs(dfs, s2, 0, x2, y2, a2, p2);
    int ans = 0;
    for(auto t1 : p1) {
        
        for(auto t2 : p2) {
            int t[15][15]{};
            for(auto tt1 : t1) {
                t[tt1.first][tt1.second]=1;
            }
            int cnt = 0;
            for(auto tt2 : t2) {
                if(t[tt2.first][tt2.second] == 1) {
                    t[tt2.first][tt2.second] = 2;
                    cnt++;
                }
                    
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}
