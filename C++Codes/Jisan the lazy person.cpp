#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, A, B, C, D;
    cin>>N>>A>>B>>C>>D;
    int sumop = A+B+C+D;
    int halfc = N/2;
    if(sumop >= halfc){
        cout<<"YES" << endl;
    }
    else{
        cout<< "NO"<<endl;
    }
    return 0;
}
