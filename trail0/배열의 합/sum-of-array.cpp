#include <iostream>
using namespace std;

int main() {
    int res, tmp;
    for (int i = 0; i < 4; i++) {
        res = 0;
        for (int j = 0; j<4; j++) {
            cin >> tmp;
            res += tmp;
        }
        cout << res << endl;
    }
    return 0;
}