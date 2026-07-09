#include <iostream>
using namespace std;

int main() {
    int N, res = 0;
    cin >> N;
    for (int i = 1; i<N; i++) {
        if (N%i==0) res += i;
    }

    if (N==res) cout << "P";
    else cout << "N";
    return 0;
}