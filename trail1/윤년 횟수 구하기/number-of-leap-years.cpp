#include <iostream>
using namespace std;

int main() {
    int N, res = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i % 400 == 0) res += 1;
        
        else if (i % 100 == 0) {}
        
        else if (i % 4 == 0) res += 1;
    }
    cout << res;
    return 0;
}