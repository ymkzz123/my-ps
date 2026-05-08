#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    int lst[N+1] = {0};
    int a;

    for (int i = 0; i < N; i++) {
        cin >> a;
        lst[i] = a*a;
    }

    for (int i = 0; i < N; i++) {
        cout << lst[i] << " ";
    }
    return 0;
}