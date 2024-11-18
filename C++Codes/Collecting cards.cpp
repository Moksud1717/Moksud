#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin >>a>>b;
        int result = __gcd(a,b);
        cout << result << endl;
    }
    return 0;
}
