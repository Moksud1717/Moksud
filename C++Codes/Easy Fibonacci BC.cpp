#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int fib[N];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < N; i++) {
        cout << fib[i];


        if (i != N - 1) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}
