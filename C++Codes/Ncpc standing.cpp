#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    for (int i = 1; i<=t; i++){
        int p, s, r;
        cin >> p>>s>>r;
        cout << "Case "<< i << ": ";

        if(s==p && r !=1){
            cout << "No"<< endl;
        }else{
            cout << "Yes"<< endl;
        }
    }
    return 0;
}
