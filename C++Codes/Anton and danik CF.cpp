#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, d = 0, i;
    cin >> n;

    string s;
    cin >> s;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A'){
            a++;
        }
        else if (s[i] == 'D'){
            d++;
        }
    }
    if (a > d){
        cout << "Anton" << endl;
    }
    else if (d > a){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}





