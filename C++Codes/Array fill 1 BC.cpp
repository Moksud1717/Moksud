#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int V;
    cin>>V;
    arr[0]= V;
    for(int i = 1; i < 10; i++){
        arr[i]=arr[ i - 1] * 2;
    }
    for(int i = 0; i < 10; i++){
     cout<< "arr[" << i << "] = " << arr[i]  << endl;
    }
    return 0;
}
