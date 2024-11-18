#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
     int result = 0;
    for (int i = 0; i < n; ++i) {
        result = result * 10 + n;
    }
   cout << result <<endl;
    return 0;
}
