#include <iostream>
using namespace std;

int main() {
    int A, B, res = 0;
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        if (i%6==0 && i%8) res += i;
    }
    cout << res;
    return 0;
}