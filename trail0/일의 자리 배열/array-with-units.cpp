#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;

    int lst[10] = {a, b};
    for (int i = 2; i<10; i++) {
        lst[i] = (lst[i-1]+lst[i-2])%10;
    }

    for (int i = 0; i<10; i++) {
        cout << lst[i] << " ";
    }


    return 0;
}