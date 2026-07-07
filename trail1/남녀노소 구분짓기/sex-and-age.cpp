#include <iostream>
using namespace std;

int main() {
    int sex, nie;
    cin >> sex >> nie;

    if (!sex) {
        if (nie >= 19) cout << "MAN";
        else cout << "BOY";
    }
    else {
        if (nie >= 19) cout << "WOMAN";
        else cout << "GIRL";
    }
    return 0;
}