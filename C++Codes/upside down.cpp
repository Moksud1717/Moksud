#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res;
    cin >> n;
    {
        n = (n/2+ 1)* (n/ 2+1);
        res = 6*n-9;
        cout << res <<endl;
    }
    return 0;
}
