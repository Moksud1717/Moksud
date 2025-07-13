#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      break;
    }
  }

  if (count == 0) {
    cout << "NO PUNISHMENT" << endl;
  } else {
    for (int i = 0; i < n; i++) {
      cout << "I DID NOT DO THE ASSIGNMENT." << endl;
    }
  }

  return 0;
}

