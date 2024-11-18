#include<bits/stdc++.h>
using namespace std;
int recursiveLinearSearch(int array[], int key, int size) {

    if (size < 0) {
        return -1;
    }
    else if (array[size] == key) {
        return 1;
    }
    else {
        return recursiveLinearSearch(array, key, size - 1);
    }
}
int main() {
    int size;
    cout << "\nEnter Size Of Array :: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "\nEnter Element at index " << i << " :: ";
        cin >> array[i];
    }

    cout << "\nThe Entered Array is :: \n\n";
    for (int j = 0; j < size; j++) {
        cout << "Arr[ " << j << " ]  =  " << array[j] << endl;
    }

    int key;
    cout << "\nEnter Key To Search in Array :: ";
    cin >> key;

    // Call the recursive linear search function
    int result = recursiveLinearSearch(array, key, size - 1);

    if (result == 1) {
        cout << "\nKey Found in Array.\n";
    } else {
        cout << "\nKey NOT Found in Array.\n";
    }

    return 0;
}

