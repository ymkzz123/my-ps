#include <iostream>
using namespace std;

int main() {
    int N, num, res = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        res += num;
    }

    cout << res << " ";
    cout << fixed;
    cout.precision(1);
    cout << (float)res/N;
    return 0;
}