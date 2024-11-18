#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h, per, i, count =0;
    cin  >> n >> h;
    for (i = 0; i < n; i++){
        cin >>per;
        if (per <= h){
            count ++;
        }
        else if(per > h){
            count = count + 2;
        }
    }
    cout << count << endl;
    return 0;
}
