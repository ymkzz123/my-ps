#include <iostream>
using namespace std;

int main() {
    int lst[3][3];
    int a, b, c;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b >>c;
        lst[i][0] = a;
        lst[i][1] = b;
        lst[i][2] = c;

    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            lst[i][j] *= 3;

        }
    }   
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            cout << lst[i][j] << " ";

        }

        cout << "\n";
    }

    return 0;
}