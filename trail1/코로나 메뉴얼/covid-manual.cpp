#include <iostream>
using namespace std;

int main() {
    
    int cnt = 0;
    char a; int t;

    for( int i = 0; i<3; i++) {
        cin >> a >> t;
        if (a=='Y'&&t>=37) cnt += 1;
    }

    if (cnt >= 2) cout << "E";
    else cout << "N";

    return 0;
}