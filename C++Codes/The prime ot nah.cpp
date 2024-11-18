#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >>n;
    if (n<2) {
        cout << "Yesss"<<endl;
    }
    else{
        for(int i = 2; i * i <=n; i++){
            if (n %i ==0) {
                cout << "Yesss"<<endl;
                return 0;
     }
}
    cout << "No" << endl;
    }
    return 0;
}

