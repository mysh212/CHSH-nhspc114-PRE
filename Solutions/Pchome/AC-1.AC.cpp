#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int q;
    cin >> q;

    vector<vector<string>> shelves(100001); // 貨架編號從 1 到 100000

    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            string s;
            cin >> x >> s;
            shelves[x].push_back(s);
        } else if (op == 2) {
            int x, y;
            cin >> x >> y;
            if (y <= shelves[x].size()) {
                cout << shelves[x][y - 1] << '\n';
            } else {
                cout << "oh can't find anything..." << '\n';
            }
        }
    }

    return 0;
}