// Author : ysh
// 2025/04/30 Wed 13:33:56
#include<bits/stdc++.h>
using namespace std;
#define R 16
#define int long long
struct bin{
    int n;
    bin(int n = 0):
        n(n) {};
    static char gs(int x) {
        if(x < 10) return '0' + x;
        else return 'A' + (x - 10);
    }
    string operator()(int x) {
        int p = n;
        string a = "";
        while(p != 0) a.push_back(gs(p % x)), p = p / x;
        
        if(a.empty()) a = "0";
        else reverse(a.begin(), a.end());

        return a;
    }
};
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    while(n--) {
        int n;cin>>n;
        bin p = bin(n);
        vector<pair<string, int>> f(R - 1);
        for(int i = 2;i<=R;i++) {
            f.at(i - 2) = (make_pair(p(i), i));
        }
        sort(f.begin(), f.end());
        for(auto &i : f) {
            cout<<i.first<<" "<<i.second<<"\n";
        }
    }
    return 0;
}