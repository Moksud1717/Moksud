#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--){
        int a,b;
        cin >>a >>b;
        if((abs(a -b)% 2) ==1){
            cout<< "Alice\n";
        }else{
            cout<<"Bob\n";
    }
    }
    return 0;
}
