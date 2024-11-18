#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, var = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        var *= 2;
        var %= 1000000007;
    }
    cout << var;
}
