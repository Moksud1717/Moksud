#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Count and print the frequency of each element
    cout << "Element\tFrequency" << endl;

    int count = 1;
    for (int i = 1; i < n; i++) {
        // Check if the current element is the same as the previous one
        if (arr[i] == arr[i - 1]) {

            count++;
        } else {
            cout << arr[i - 1] << "\t" << count << endl;

            count = 1;
        }
    }
    cout << arr[n - 1] << "\t" << count << endl;

    return 0;
}
