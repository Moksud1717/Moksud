#include <bits/stdc++.h>
using namespace std;
int main(){
    int L;
    char T;
    double M[12][12];
    cin>> L >> T;
    for(int i = 0; i < 12; i++){
    for(int j = 0; j< 12; j++) {
            cin >>  M[i][j];
    }
    }
    double sum = 0;

      for(int i = 0; i < 12; i++){
        for(int j = L+1; j < 12; j++){
            sum+= M[i][j];
        }
      }
      if (T == 'M'){
            sum /= 12.0;
      }
      cout<< fixed<<setprecision(1) << sum << endl;
      return 0;
}
