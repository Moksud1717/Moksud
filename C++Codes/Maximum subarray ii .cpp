#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
   int n,x;
   cin>> n>>x;
   vector<int> t(n);
   for (int i = 0; i < n; i++){
    cin >> t[i];
   }
        long long ans = 0;
        for ( int i = 0; i < n; i++){
            long long prefix_sum = 0;
            for (int j = 0; j < n; j++){
                prefix_sum += t[j];
                if (prefix_sum== x){
                    ans++;
                }
            }
        }
        cout << ans << endl;
}
