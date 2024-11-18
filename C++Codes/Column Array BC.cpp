#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C;
    char T;
    double M[12][12];
    cin>>C>>T;

    for( int i = 0; i < 12; i++)
       for(int j = 0; j < 12; j++){
        cin>>M[i][j];
       }
       double sum = 0.0;
       for(int i =  0; i < 12; i++){
        sum += M[i][C];
       }
       if(T == 'S'){
        cout<<fixed<< setprecision(1)<<sum<<endl;
       }
       else if(T=='M'){
        double ave = sum/12.0;
        cout<< fixed << setprecision(1) << ave << endl;
       }
       return 0;
}
