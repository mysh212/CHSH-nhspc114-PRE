// Author : ysh 
// Pre-compiled : 2025/05/04 Sun 12:47:08 
 
#include<bits/stdc++.h> 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"


using namespace std;
const int R = int(1e5);
# 1 "C:\\Users\\ysh00\\Coding\\library/slow" 1
# 38 "C:\\Users\\ysh00\\Coding\\library/slow"
template<class T>
std::istream& operator>>(std::istream& fin,std::vector<T>&f) {
    for(auto &&i : f) fin>>i;
    return fin;
}
template<class T,class R>
std::istream& operator>>(std::istream& fin,std::pair<T,R>&x) {
    fin>>x.first>>x.second;
    return fin;
}

template<class T>
std::ostream& operator<<(std::ostream& fout,std::vector<T>&f) {
    for(auto &i : f) fout<<i<<" ";
    return fout;
}
template<class T,class R>
std::ostream& operator<<(std::ostream& fout,std::pair<T,R>&x) {
    fout<<x.first<<" "<<x.second;
    return fout;
}
# 6 "ccb.cpp" 2
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    vector<vector<string>>f(R);
    for(int _ = 0;_<n;_++) {
        int t;cin>>t;
        if(t == 1) {
            int b;string c;cin>>b>>c;
            f.at(b - 1).push_back(c);
        }
        if(t == 2) {
            int b, c;cin>>b>>c;
            b--;c--;
            if(f.at(b).size() <= c) goto no;
            yes:
                cout<<(f.at(b).at(c))<<"\n";
                continue;
            no:
                cout<<("oh can't find anything...")<<"\n";
                continue;
        }
    }
    return 0;
}
/*  
// Author : ysh
// 2025/05/04 Sun 12:42:54
#include<bits/stdc++.h>
using namespace std;
const int R = int(1e5);
#include<slow>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    vector<vector<string>>f(R);
    re(n) {
        int t;cin>>t;
        if(t == 1) {
            int b;string c;cin>>b>>c;
            f.at(b - 1).push_back(c);
        }
        if(t == 2) {
            int b, c;cin>>b>>c;
            b--;c--;
            if(f.at(b).size() <= c) goto no;
            yes:
                outl(f.at(b).at(c));
                continue;
            no:
                outl("oh can't find anything...");
                continue;
        }
    }
    return 0;
}  
*/  
