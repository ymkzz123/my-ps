#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int lena, lenb;
    lena = a.length();
    lenb = b.length();

    if (lena > lenb) {
        cout << a << " " << lena;
    }
    else if (lena < lenb) {
        cout << b << " " << lenb;
    }
    else cout << "same";

    return 0;
}