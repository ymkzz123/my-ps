#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int lst1[x][y], lst2[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> lst1[i][j];
        }
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> lst2[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
        
            cout << (lst1[i][j] != lst2[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}