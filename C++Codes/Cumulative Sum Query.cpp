#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int Q;
    cin >> Q;

    while (Q--){
        int i, j;
        cin >> i >> j;

        int sum = 0;
        for (int k = i; k <= j; k++){
            sum += arr[k];
        }
        cout << sum <<endl;
  }
}
