#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int b, c;
    cin >> b >> c;
    int mp = b / c;

    int mt = 0;
    for (int i = 1; i <= mp; i++) {
      int rc = i * i + (mp - i) * (mp - i);

      int tc = c * mp + rc;

      if (tc <= b) {
        mt++;
      }
    }

    cout << mt << endl;
  }

  return 0;
}



