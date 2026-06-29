#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < m; j++) {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}