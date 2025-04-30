#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 把十進位的數字轉成 base 進位的字串
string to_base(long long x, int base) {
    if (x == 0) return "0";
    string res;
    while (x > 0) {
        int digit = x % base;
        if (digit < 10)
            res += ('0' + digit);
        else
            res += ('A' + (digit - 10));
        x /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        vector<pair<string, int>> results;
        
        for (int base = 2; base <= 16; ++base) {
            results.push_back({to_base(x, base), base});
        }
        
        sort(results.begin(), results.end());
        
        for (auto& p : results) {
            cout << p.first << " " << p.second << endl;
        }
    }    
    return 0;
}