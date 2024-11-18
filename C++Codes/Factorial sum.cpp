#include <bits/stdc++.h>
using namespace std;
#define ll long long
  ll factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        ll result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int M, N;

    while (cin >> M >> N) {
        ll sum = factorial(M) + factorial(N);
        cout << sum << endl;
    }

    return 0;
}
