#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, suma, sumb;
    cin >> A >> B;
    suma = A+B;
    sumb = B+A;
    if (suma == sumb) cout << "true";
    else cout << "false";
    return 0;
}