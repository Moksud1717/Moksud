#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b >= 10) || (b + c >= 10) || (a + c >= 10)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
