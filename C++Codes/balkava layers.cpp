#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--){
        int l, n;
        cin >> l>>n;
        int res= 0;
        for (int i =0; i<n; i++) {
            res+= l+i;
        }
        cout << res<< endl;
    }
    return 0;
}

