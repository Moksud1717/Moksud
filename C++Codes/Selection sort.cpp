#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    //selection sort
    for(int i = 0; i < n - 1; i++){
        int min = i;
//Find the index of the minimum element in the unsorted part of the array
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //swap(arr[i], arr[min]);
         int temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
    }
    for(int i = 0; i< n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
