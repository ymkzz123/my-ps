#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    float res;
    res = (float)(a+b) / (float)(a-b);
    cout << fixed;
    cout.precision(2);
    cout << res;
    return 0;
}