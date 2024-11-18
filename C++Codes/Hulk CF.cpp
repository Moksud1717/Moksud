#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << "I hate";
    for (int i = 1; i < n; i++) {
        cout << (i & 1 ? " that I love" : " that I hate");
    }
    cout << " it" << endl;
    return 0;
}

