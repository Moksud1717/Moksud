/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int highest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    cout << highest << endl;

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int highest = arr[0];
    int secondHighest = arr[1];

    for (int i = 1; i < n; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        }
        else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }

    cout << secondHighest << endl;

    return 0;
}
