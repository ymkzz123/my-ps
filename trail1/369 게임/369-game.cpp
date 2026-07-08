#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int temp = i;
        int flag = 0;

        if (i%3 == 0) {
            flag = 1;
        }

        while (temp > 0) {
            int three = temp%10;
            
            if (three == 3 || three == 6 || three == 9) {
                flag = 1;
                break;
            }

            temp /= 10;
        }

        if (flag) cout << 0;
        else cout << i;

        cout << " ";
    }

    return 0;
}