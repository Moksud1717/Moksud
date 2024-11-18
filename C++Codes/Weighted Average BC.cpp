#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        double n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        double average = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
        cout << fixed << setprecision(1) << average << endl;
    }

    return 0;
}




