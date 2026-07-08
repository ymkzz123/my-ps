#include <iostream>
using namespace std;

int main() {
    int res = 0;
    int a;

    for (int i = 0; i < 5; i++) {
        cin >> a;
        if (a%2==0) res += 1;
    }
    cout << res;
    return 0;
}