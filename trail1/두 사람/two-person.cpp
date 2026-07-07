#include <iostream>
using namespace std;

int main() {
    int nie;
    char sex;
    int flag = 0;

    for (int i = 0; i < 2; i++) {
        cin >> nie >> sex;
        if (nie >= 19 && sex == 'M') {
            cout << 1;
            flag = 1;
            break;
        }
    }

    if (!flag) cout << 0;
    return 0;
}