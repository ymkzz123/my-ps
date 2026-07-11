#include <iostream>
using namespace std;

int main() {
    int a, c;
    char o;

    cin >> a >> o >> c;

    if (o=='*') cout << a << " " << o << " " << c << " = " << a*c;
    else if (o=='/') cout << a << " " << o << " " << c << " = " << a/c;
    else if (o=='+') cout << a << " " << o << " " << c << " = " << a+c;
    else if (o=='-') cout << a << " " << o << " " << c << " = " << a-c;
    else cout << "False";
    return 0;
}