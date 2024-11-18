#include <bits/stdc++.h>
#include <vector>
using namespace std;

int minimum_cost(const vector<int>& matrix, int i, int j) {
    int small = matrix[i];
    for (int k = i + 1; k < j; k++) {
        if (matrix[k] < small)
            small = matrix[k];
    }
    return small;
}

int main() {
    int limit;
    vector<int> rows, columns, temp;
    vector<vector<int>> multiplier;

    cout << "Enter Total Number of Matrices: ";
    cin >> limit;

    rows.resize(limit);
    columns.resize(limit);
    temp.resize(limit + 1, 0);
    multiplier.resize(limit + 1, vector<int>(limit + 1, 0));

    for (int i = 0; i < limit; i++) {
        cout << "Enter Number of Rows of Matrix " << i + 1 << ": ";
        cin >> rows[i];
        cout << "Enter Number of Columns of Matrix " << i + 1 << ": ";
        cin >> columns[i];
    }

    for (int i = 0; i < limit; i++) //i=4
        temp[i] = rows[i];
    temp[limit] = columns[limit - 1]; //temp[4]= column[3]

    for (int l = 2; l <= limit; l++)//4
    {
        for (int i = 1; i <= limit - l + 1; i++) {
            int j = i + l - 1;
            multiplier[i][j] = INT_MAX; // Initialize to a large value
            for (int k = i; k < j; k++) {
                int cost = multiplier[i][k] + multiplier[k + 1][j] + temp[i - 1] * temp[k] * temp[j];
                if (cost < multiplier[i][j]) {
                    multiplier[i][j] = cost;
                }
            }
        }
    }

    cout<< "\nMinimum Multiplications Needed: " << multiplier[1][limit] <<endl;
    return 0;
}

//Youtube: Md. Tariqul islam, vid duration: 16.43
