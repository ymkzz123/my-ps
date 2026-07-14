#include <iostream>
using namespace std;


int month(int x, int y) {
    
    if (x==2) {
        if (y <= 28) return 1;
        else return 0;
    }

    else {
        
        int flag = 0;
        int baskin[7] = {1, 3, 5, 7, 8, 10, 12};

        for (int i = 0; i < 7; i++) {
            if (x==baskin[i]) flag = 1;
        }

        if (flag) {
            if (y<=31) return 1;
            else return 0;
        }

        else {
            if (y<=30) return 1;
            else return 0;
        }
    }
    

}

int main() {
    int M, D;
    cin >> M >> D;
    if (M > 12 || D > 31) cout << "No";
    
    else {
        if (month(M, D)) cout << "Yes";
        else cout << "No";
        }


    return 0;
}