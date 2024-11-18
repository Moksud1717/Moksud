#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    if (N >= 1) {
        sum = N * (N + 1) / 2;
    } else {
        sum = N * (N - 1) / 2 - N;
    }

    cout << sum << endl;
    return 0;
}
