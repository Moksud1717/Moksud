#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int>types(n);
    for(int i=0; i<n; i++){
        cin>>types[i];
    }
    int max=0, mostFreq=0;
    for(int j=1; j<=5; j++){
        int count=0;
        for(int i=0; i<n; i++){
            if(types[i]==j){
                count++;
            }
        }
        if(count>max){
            max=count;
            mostFreq=j;
        }
    }
    cout<<mostFreq<< endl;
    return 0;
}

