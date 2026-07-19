#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;

    int res = 0;
    for (int i = 0; i <= n; i++) res += i;
    cout << res/10;
    return 0;
}