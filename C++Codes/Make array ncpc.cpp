#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++){
        int n;
        cin >> n;
         int A[n];
        for (int i = 0; i < n; i++){
            cin >> A[i];
        }
        int peaks = 0;
        for (int i = 1; i < n - 1; ++i) {
            if ((A[i] > A[i - 1] && A[i] > A[i + 1]) || (A[i] < A[i - 1] && A[i] < A[i + 1])) {
                peaks++;
    }
    }
        if (peaks < 2) {
            cout << "Case " << t << ": -1" << endl;
        } else {
            int beautyFactor = n - 2;
            cout << "Case " << t << ": " << beautyFactor << endl;
        }
    }
    return 0;
}
