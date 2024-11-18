#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 1; i < s.size(); i++) {
        int currentCnt = 1;  // Initialize the current count for each character
        for (int j = i - 1; j >= 0; j--) {
            if (s[i] == s[j]) {
                currentCnt++;
            } else {
                break;  // Stop if a different character is encountered
            }
        }
        cnt = max(cnt, currentCnt);  // Update the maximum count
    }

    cout << cnt << endl;
    return 0;
}
