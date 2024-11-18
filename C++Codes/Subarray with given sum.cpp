#include <bits/stdc++.h>
using namespace std;
void subarrsum(int arr[], int n, int sum){
    for(int i = 0; i< n; i++){
        int currentsum = arr[i];

        if(currentsum == sum){
            cout << "Sum found at index "<< i<< endl;
            return;
        }
        else{
            for(int j =  i+1; j<n; j++){
                currentsum += arr[j];
                if(currentsum == sum){
                    cout << "Sum found at indexes "<< i << " and "<<j<< endl;
                    return;
                }
            }
        }
    }
    cout << " No subarray found";
    return ;
}
int main(){
    int arr[] = {15, 2,4,8,9,5,10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    subarrsum(arr, n, sum);
    return 0;
}
