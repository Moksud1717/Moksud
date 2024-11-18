#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, sum = 0;
    cin >> N;

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            sum = sum + i;
        }
    }
    else if (N <= 1) {
        for (int j = 1; j >= N; j--) {
            sum = sum + j;
        }
    }

    cout << sum << endl;

    return 0;
}

