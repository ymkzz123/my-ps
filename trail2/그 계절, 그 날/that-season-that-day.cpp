#include <iostream>
#include <string>
using namespace std;

int yoon(int x) {
    if (x%400 == 0) return 1;
    else if (x%100==0) return 0;
    else if (x%4==0) return 1;
    else return 0;
}

int month(int x) {
    int baskin[7] = {1, 3, 5, 7, 8, 10, 12};
    for (int i = 0; i < 7; i++) {
        if (baskin[i] == x) return 1;
        }
    return 0;

}
int main() {
    
    int Y, M, D;
    cin >> Y >> M >> D;
    string weather[] = {"Winter", "Winter", "Spring", "Spring", "Spring", "Summer", "Summer","Summer", "Fall", "Fall", "Fall", "Winter"};

    if (month(M)) {
        cout << weather[M-1];
    }

    else {
        if (M == 2) {
            if (yoon(Y)) {
                if (D <= 29) cout << "Winter";
                else cout << -1;
                }

            else {
                if (D <= 28) cout << "Winter";
                else cout << -1;
                }            
        }

        else {
            if (D == 31) cout << -1;
            else cout << weather[M-1];
        }   
    }
        

 


    return 0;
}