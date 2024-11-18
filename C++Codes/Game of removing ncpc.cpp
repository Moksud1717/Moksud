#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1;i <=t;i++) {
        int n;
        cin >>n;
        int a[n];
        int b[n];
        for (int i= 0; i<n; i++) {
            cin >> a[i];
        }
        for (int i =0; i<n; i++){
            cin >> b[i];
        }
        int start = -1, end = n - 1;
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]) {
                start = i;
                break;
            }
        }
        for (int i = n-1; i>=0; i--) {
            if (a[i] != b[i]){
                end = i;
                break;
            }
        }
        int length = (start != -1) ? (end - start + 1) : 0;
        cout << "Case " << i << ": " << length << endl;
    }
    return 0;
}
