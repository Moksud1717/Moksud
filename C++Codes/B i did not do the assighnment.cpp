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

/*


n starting from 2. It runs while i * i <= n. For n = 5, the loop runs only once with i = 2.

    2 * 2 <= 5 is true, so the loop enters.
    5 % 2 is not equal to 0, so the count remains 0.

After the loop, the program checks the value of count.

    Since count is still 0, it enters the if (count == 0) block.
    Prints: NO PUNISHMEN



*/
