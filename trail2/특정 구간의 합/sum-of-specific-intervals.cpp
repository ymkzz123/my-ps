#include <bits/stdc++.h>
using namespace std; 

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> lst(N);
    for (int i = 0; i < N; i++) cin >> lst[i];

    for (int i = 0; i < M; i++) {

        int res = 0;
        int a1, a2;
        cin >> a1 >> a2;
        for (int idx = a1; idx <= a2; idx++) res += lst[idx-1];

        cout << res << endl; 
    }

    return 0;
}