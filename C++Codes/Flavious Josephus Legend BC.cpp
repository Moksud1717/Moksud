#include <iostream>
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int NC;
    cin >> NC;

    for (int i = 1; i <= NC; i++) {
        int n, k;
        cin >> n >> k;

        int sur = josephus(n, k);
        cout << "Case " << i << ": " << sur << endl;
    }

    return 0;
}
