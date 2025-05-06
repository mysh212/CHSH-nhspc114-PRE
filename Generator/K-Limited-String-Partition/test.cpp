// Author : ysh
// 2025/04/30 Wed 10:43:27
#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac, as, 1);

    int n = atoi(as[1]);
    int k = atoi(as[2]);
    int o = atoi(as[3]);

    if(o) {
        n = rnd.next(1, n);
        k = rnd.next(1, k);
    }
    
    cout<<n<<" "<<k<<"\n";
    for(int i = 0;i<n;i++) {
        cout<<char('a' + rnd.next(0, 25));
    }
    cout<<"\n";

    return 0;
}