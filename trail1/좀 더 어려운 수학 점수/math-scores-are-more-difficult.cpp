#include <iostream>
using namespace std;

int main() {

    int amath, aeng, bmath, beng;
    cin >> amath >> aeng >> bmath >> beng;

    if (amath < bmath) cout << "B";
    else if (amath > bmath) cout << "A";
    else {
        if (aeng < beng) cout << "B";
    else if (aeng > beng) cout << "A";
    }

    return 0;
}