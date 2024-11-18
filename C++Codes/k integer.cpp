#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // If k is 2, then it's always possible
        if (k == 2) {
            cout << "YES" << endl;
        } else if (n % 2 == 0 && k == n / 2) {
            // If n is even and k is half of n, then it's always possible
            cout << "YES" << endl;
        } else if (n % 2 == 1 && k <= n / 2) {
            // If n is odd and k is less than or equal to half of n, then it's always possible
            cout << "YES" << endl;
        } else {
            // Otherwise, it's not possible
            cout << "NO" << endl;
        }
    }

    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == 2 || k <= n / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

*/
