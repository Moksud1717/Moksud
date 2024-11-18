#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2, 7, 8, 9, 10, 20};
    int key = 19;
    const int size = 7;
    int left = 0, right = size - 1;
    int middle;

    while(left <= right){
        middle = (left + right)/ 2;

        if(arr[middle] == key){
            cout<<"key found at index " << middle<< endl;
            return 0;
        }
        else if(key > arr[middle]){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    cout << "key is not found" << endl;
    return 0;

}

/*if(left > right)
return("Not found")
else if (arr[middle] == key)
return middle;
}
else if( key > arr[middle])
left = middle + 1
else if(key < arr[middle])
right = middle - 1*/
