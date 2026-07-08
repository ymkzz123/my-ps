#include <iostream>
using namespace std;

int main() {
    
    int n; cin >> n;
    int thiryone[] = {1, 3, 5, 7, 8, 10, 12};
    int flag = 0;

    if (n == 2) cout << 28;
    else {
        for (int i = 0; i < 7; i++) {
            if (n==thiryone[i]) {
                cout << 31; 
                flag = 1; 
                break;
                }
        }
        if (!flag) cout << 30;
    }

    return 0;
}