// Author : ysh
// 2025/05/04 Sun 12:29:40
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    string n;cin>>n;
    int ans = 1;
    vector<int>pre(26);
    for(char &i : n) {
        int now = i - 'a';
        pre.at(now)++;
        if(pre.at(now) > b) {
            ans++;
            for(int i = 0;i<26;i++) pre.at(i) = 0;
            pre.at(now) = 1;
        }
    }
    cout<<ans;
    return 0;
}