#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       double n;
       int c[1000];
       int sum=0, cnt=0;
       cin >> n;
       for(int i = 0; i<n; i++){
        cin >> c[i];
        sum+=c[i];
       }
     double avg = sum/n;
     for(int i =0; i<n; i++){
        if(avg < c[i])
        cnt++;
       }

      cout << fixed << setprecision(3) << (cnt/n) * 100 << "%" << endl;
    }
    return 0;
}
