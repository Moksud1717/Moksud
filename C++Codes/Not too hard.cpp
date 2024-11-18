#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        int s;
        cin >>s;
        if(s <=x){
            ans =ans+s;
        }
    }
    cout << ans<< endl;
    return 0;
}
