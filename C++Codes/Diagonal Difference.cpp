#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sumdiag1=0, sumdiag2=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int nu;
            cin>> nu;
            if(i==j)
                sumdiag1+=nu;
            if(i+j==N-1)
                sumdiag2+=nu;
        }
    }
    cout << abs(sumdiag1-sumdiag2)<< endl;
    return 0;
}
