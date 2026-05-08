#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << int(A>=B) << "\n" << int(A>B) << "\n" << int(A<=B) << "\n" << int(A<B) << "\n" << int(A==B) << "\n" << int(A!=B);

    return 0;
}