#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int clicks = 0;
  while (n < m) {
    n *= 2;
    clicks++;
  }

  while (n > m) {
    n--;
    clicks++;
  }

  cout << clicks << endl;

  return 0;
}
