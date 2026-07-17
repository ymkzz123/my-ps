#include <iostream>

using namespace std;

void star(int x) {
    for (int abc = 0; abc < x; abc++) {
        cout << "* ";
    }
    cout << endl;

}

int n;

int main() {
    cin >> n;

    for (int i = n; i > 0; i--) star(i);
    for (int i = 1; i <= n; i++) star(i);


    return 0;
}