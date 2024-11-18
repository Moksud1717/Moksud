#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        string s;
        cin>>s;
        int a =0, b=0;
        for (int i = 0; i < s.length(); i++){
            char c = s[i];
            if (c == 'A'){
                a++;
            } else{
                b++;
            }
        }
        if (a>b){
            cout << "A"<< endl;
    }else{
            cout << "B"<<endl;
    }
    }
    return 0;
}

