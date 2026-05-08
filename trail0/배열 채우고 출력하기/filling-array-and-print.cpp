#include <iostream>
using namespace std;

int main() {
    
    char s;
    char lst[10];
    for (int i = 0; i < 10; i++) {
        cin >> s;
        lst[i] = s;
    }

    for (int i = 9; i >= 0; i--) {
        cout << lst[i];
    }
    return 0;
}