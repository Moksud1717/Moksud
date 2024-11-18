#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int num, result = 0;
    cin >> num;

    for (int i = 0; i < 32; i += 2) {
        int b1 = (num >> i) & 1;
        int b2 = (num >> (i + 1)) & 1;

        result |= (b2 << i) | (b1 << (i + 1));//Swap bits
    }
    cout << result << endl;
    return 0;
}

/*
Input: 10 (binary: 1010)

i=0:
    b1 = (10 >> 0) & 1 = 0
    b2 = (10 >> 1) & 1 = 1
    result |= (1 << 0) | (0 << 1) = 1
Result after i=0: 0001

i=2:
    b1 = (10 >> 2) & 1 = 1
    b2 = (10 >> 3) & 1 = 0
    result |= (0 << 2) | (1 << 3) = 10
Result after i=2: 1010

...

i=28:
    b1 = (10 >> 28) & 1 = 0
    b2 = (10 >> 29) & 1 = 0
    result |= (0 << 28) | (0 << 29) = 10
Result after i=28: 1010

i=30:
    b1 = (10 >> 30) & 1 = 0
    b2 = (10 >> 31) & 1 = 0
    result |= (0 << 30) | (0 << 31) = 10
Result after i=30: 1010

Output: 5

*/
