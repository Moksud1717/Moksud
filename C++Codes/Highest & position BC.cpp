#include <bits/stdc++.h>
using namespace std;

int main() {
    int num[100];
    int h = 0;
    int p = 0;
    for (int i = 0; i < 100; i++) {
        cin >> num[i];

        // Update highest number and input position
        if (num[i] > h) {
            h = num[i];
            p = i + 1;
        }
    }

    // Print the highest number and its input position
    cout << h << endl;
    cout << p << endl;

    return 0;
}


