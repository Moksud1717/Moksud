#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    long long frag = (n + a - 1)/a * (m + a -1)/a;
    cout << frag << endl;
    return 0;
}
