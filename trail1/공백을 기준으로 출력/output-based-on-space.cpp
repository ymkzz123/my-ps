#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int x = 0; x < s.length(); x++) {
        if (s[x] == ' ') {}
        else cout << s[x];
    }
    getline(cin, s);
    for (int x = 0; x < s.length(); x++) {
        if (s[x] == ' ') {}
        else cout << s[x];
    }
    return 0;
}