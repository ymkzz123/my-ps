#include <iostream>

using namespace std;

int n, m;

int gcd(int A, int B) {
    if (A%B == 0)
        return B;
    else
        return gcd(B, A%B);
}

int main() {
    cin >> n >> m;

    cout << n*m/gcd(n,m);
   

    return 0;
}