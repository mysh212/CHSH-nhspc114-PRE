// Author : ysh
// 2025/04/30 Wed 13:18:19
#include<bits/stdc++.h>
using namespace std;
#define int long long
struct box{
    int a,b,m;
    box(int a = 0, int b = 0, int m = 0):
        a(a), b(b), m(m) {};
    box operator*(box a) {
        // cerr<<a.a<<" "<<a.b<<" "<<a.m<<"\n";
        return box((this -> a * a.a) % m, (b * (a.a) + a.b) % m, m);
    }
    int operator()(int x) {
        return (a * x + b) % m;
    }
};
box fp(box a, int b) {
    if(b == 1) return a;

    box now = fp(a, b >> 1);
    now = now * now;

    if(b & 1) now = now * a;

    return now;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    cout<<fp(box(c,d,b),a)(e);
    return 0;
}