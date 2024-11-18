#include <bits/stdc++.h>
using namespace std;
void findTriplest(int arr[], int n){
    bool found = false;
    for(int i = 0; i< n - 2; i++){
        for(int j = i+1; j<n-1;j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j]+ arr[k] == 0){
                    cout << arr[i]<< " "<< arr[j]<< " "<< arr[k]<< " " <<endl;
                    found = true;
                }
            }
        }
    }
    if(found == false)
        cout << " Not exist " << endl;
}
int main(){
   int arr[] = {0, -1, 2, -3, 1};
   int n = sizeof(arr) / sizeof(arr[0]);
   findTriplest(arr, n);
   return 0;
}

/*
i = 0:
    arr[0] is 0.
    j = 1:
        arr[1] is -1.
        k = 2:
            arr[2] is 2.
            Sum: 0 - 1 + 2 = 1 (not zero).
        k = 3:
            arr[3] is -3.
            Sum: 0 - 1 - 3 = -4 (not zero).
        k = 4:
            arr[4] is 1.
            Sum: 0 - 1 + 1 = 0 (zero).
            Print: 0 -1 1
            */
