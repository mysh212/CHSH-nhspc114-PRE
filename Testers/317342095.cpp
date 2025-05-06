#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if(s == "Why can't I run my code?") {
        cout << "Haven't you considered looking at your own problems first?";
    } else if(s == "What does this error message mean?") {
        cout << "This error message alienates the effort people put in, you get it?";
    } else if(s == "How can I optimize the performance of this code?") {
        cout << "Why bother being so concerned about performance?";
    } else {
        cout << "The server is busy. Please try again later.";
    }
}