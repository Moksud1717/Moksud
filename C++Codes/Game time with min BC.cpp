#include <bits/stdc++.h>
using namespace std;
int main(){
    int ih, im, fh, fm;
    cin>>ih>>im>>fh>>fm;
    int startt = ih * 60 + im;
    int endt= fh * 60 + fm;
    int duration = endt - startt;
     if(duration < 0);
     duration += 24 * 60;
     hours = duration / 60;
     minutes = duration % 60;
     cout<< "O JOGO DUROU {hours} HORA(S) E {minutes} MINUTO(S)"<<endl;
}
