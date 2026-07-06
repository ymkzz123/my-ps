#include <iostream>
using namespace std;

int main() {

    int lst[11] = {};
    int a, b;
    cin >> a >> b;
    lst[0] = a;
    lst[1] = b;
    for (int i = 2; i < 10; i++) {
        lst[i] = (lst[i-2]+lst[i-1])%10;
    }

    for (int i = 0; i < 10; i++) {
        cout << lst[i] << " ";
    }

    return 0;
}