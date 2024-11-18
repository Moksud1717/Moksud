#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int left = 0, right = n - 1;
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;

        if (arr[middle] == key) {
            cout << "key found at index " << middle << endl;
            return 0;
        } else if (key > arr[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    cout << "key is not found" << endl;
    return 0;
}

