#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    vector<int> customers(m);
    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }

    sort(tickets.begin(), tickets.end());
    vector<int> prices(m, -1);

    for (int i = 0; i < m; i++) {
        int pos = upper_bound(tickets.begin(), tickets.end(), customers[i]) - tickets.begin();
        if (pos > 0) {
            pos--;
            prices[i] = tickets[pos];
            tickets.erase(tickets.begin() + pos);
        }
    }

    for (int i = 0; i < m; i++) {
        cout << prices[i] << endl;
    }

    return 0;
}
