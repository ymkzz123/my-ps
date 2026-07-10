#include <iostream>
using namespace std;

int main() {
    
    int A, B;
    cin >> A >> B;
    int tmp, res = 0;

    for (int i = A; i <= B; i++) {
        if (i%3==0) res += 1;

        else {
            tmp = i;

            while (tmp > 0) {
                if (tmp%10 != 0 && (tmp%10)%3==0) {
                    res += 1;

                    break;
                }

                tmp /= 10;
                
            }
        }
    }

    cout << res;
    return 0;

}