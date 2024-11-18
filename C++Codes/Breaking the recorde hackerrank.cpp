#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int>scr(n);
    for(int i=0; i<n; i++){
        cin>> scr[i];
    }
    int mx=scr[0], mn=scr[0];
    int cntA=0, cntB=0;
    for(int i=1; i<n; i++){
        if(scr[i]>mx){
            cntA++;
            mx=scr[i];
        }
        else if(scr[i]<mn){
            cntB++;
            mn=scr[i];
        }
    }
    cout << cntA<< " "<< cntB;
    return 0;
}