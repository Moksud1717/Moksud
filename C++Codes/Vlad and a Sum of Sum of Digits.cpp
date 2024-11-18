#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long result=0;
        for (int i = 1; i <= n; i++){
            int num= i;
            while (num>0){
                result +=num%10;
                num /=10;
            }
        }
        cout <<result<<endl;
    }
    return 0;
}

