#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> commonFactors;

    for (int i = 2; i <= min(n, m); ++i) {
        while (n % i == 0 && m % i == 0) {
            commonFactors.push_back(i);
            n /= i;
            m /= i;
        }
    }

    if (commonFactors.empty()) {
        cout << -1 << endl;
    } else {
        for (int factor : commonFactors) {
            cout << factor << " ";
        }
        cout << endl;
    }

    return 0;
}
