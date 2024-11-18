#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;

    set<int> dv;
    for (int i = 0; i <n; i++){
        int x;
        cin>> x;
        dv.insert(x);
    }
    int dc = dv.size();
    cout << dc << endl;
    return 0;
}
