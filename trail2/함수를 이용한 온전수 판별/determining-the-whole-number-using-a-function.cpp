#include <iostream>
using namespace std;

int onjunsu(int x) {
    if ((x%2==1) && (x%10 != 5) && (x%3!=0 || x%9==0)) return 1;
    else return 0;
}

int main() {
    int A, B;
    cin >> A >> B;
    int res = 0;
    for (int i = A; i <= B; i++) {
        if (onjunsu(i)) res += 1;
    }
    cout << res;
    return 0;
}