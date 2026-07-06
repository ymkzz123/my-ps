#include <iostream>
using namespace std;

int main() {
    int lst1[3][3], lst2[3][3];
    int x, y, z;
    for (int i = 0; i < 3; i++) {
            cin >> x >> y >> z;
            lst1[i][0] = x;
            lst1[i][1] = y;
            lst1[i][2] = z;
        }

    for (int i = 0; i < 3; i++) {
        cin >> x >> y >> z;
        lst2[i][0] = x;
        lst2[i][1] = y;
        lst2[i][2] = z;
    }
    
    int res[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = lst1[i][j] * lst2[i][j];

            }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";

            }
    cout << endl;
    }

    return 0;
}