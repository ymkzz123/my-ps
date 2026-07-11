#include <iostream>
using namespace std;

int prime(int x) {
    if (x < 2) return 0;

    for (int i = 2; i*i <= x; i++) {
        if (x%i==0) return 0;
    }

    return 1;
}


int jjaksu(int x) {
    int sum = 0;
    while (x/10) {
        sum += x%10;
        x /= 10;
    }
    sum += x;
    if (sum%2) return 0;
    else return 1;
}


int main() {
    int A, B;
    cin >> A >> B;
    int res = 0;

    for (int i = A; i <= B; i++) {
        if (prime(i) && jjaksu(i)) {
            res++;
        }
    }

    cout << res;

    return 0;
}