#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        int result= 1;
        cin >>a >>b;
        for(int i = 0; i<b; i++){
         result = (result*a)%10;
        }
        cout << result << endl;
    }
    return 0;
}
