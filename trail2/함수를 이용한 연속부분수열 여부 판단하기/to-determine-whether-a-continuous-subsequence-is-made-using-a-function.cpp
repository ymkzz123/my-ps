#include <iostream>
using namespace std;
int n1, n2;

int match(int x, int lst1[], int lst2[]) {
    for (int j = 0; j < n2; j++) {
        if (lst1[x+j] != lst2[j]) return 0;
    }
    return 1;
}

int main() {
    cin >> n1 >> n2;
    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    int flag = 0;
    
    for (int i = 0; i <= n1 - n2; i++) {
        if (match(i, a, b)) {
            flag = 1; break;
        }
    }

    cout << (flag ? "Yes" : "No");
    return 0;
}