#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char g[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> g[i][j];
            }
        }
        string w;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (g[j][i] != '.') {
                    w.push_back(g[j][i]);
                }
            }
        }

        cout << w << endl;
    }

    return 0;
}







