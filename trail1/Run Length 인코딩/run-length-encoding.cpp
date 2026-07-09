#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char flag = s[0];
    int cnt = 0;
    string res = "";

    for (int i = 0; i < s.length(); i++) {
        cnt += 1;

        if (i + 1 == s.length() || s[i + 1] != flag) {
            res += flag+to_string(cnt);

            if (i+1 < s.length()) {
                flag = s[i+1];
                cnt = 0;
            }

        }

    }

    cout << res.length() << endl;
    cout << res;
    return 0;
}