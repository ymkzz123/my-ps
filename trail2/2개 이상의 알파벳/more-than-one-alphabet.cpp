#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    if (s.length()==1) cout << "No";
    
    else {    
        cin >> s;
        char flag = s[0];
        int res = 0;
        for (int i = 1; i < s.length(); i++) {

            if (s[i] != flag) {
                res = 1;}
        }
    
        if (res) cout << "Yes";
        else cout << "No";

    }

    return 0;
}