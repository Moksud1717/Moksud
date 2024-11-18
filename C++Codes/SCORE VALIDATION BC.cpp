#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    double score, sum = 0.0;
    while(count < 2){
     cin>>score;
     if( score >= 0.0 && score <=10.0){
        sum += score;
        count++;
     }
     else{
        cout<< "nota invalida" <<endl;
     }
    }
    double ave = sum / 2.0;
    cout << "media = " <<fixed << setprecision(2)<<ave<<endl;
    return 0;
}

