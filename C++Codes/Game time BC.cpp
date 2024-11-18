#include <bits/stdc++.h>
using namespace std;
int main(){
     int s, e;
     cin>> s >> e;
     int duration;
     if( s < e){
        duration = e - s;
     }
     else{
        duration= 24-s+e;
     }
     cout<<"O JOGO DUROU " << duration << " HORA(S)" <<endl;
     return 0;
}
