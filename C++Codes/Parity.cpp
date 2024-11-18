#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {

    int n;
    int r;

        cin >> n;
        r = 0;
        while (n) {
            r += n % 2;
            n = n / 2;
        }
        if (r % 2) {
            cout << "Case " << i << ": odd" <<endl;
        }
        else {
            cout << "Case " << i << ": even" << endl;
        }
    }
    return 0;
}
