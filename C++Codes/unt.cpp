#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n, m, n1, n2;
   cin >> a>>b>>n>>m;
    n1 = a+n;
    n2 = b+m;
    if(n1 > n2){
        cout << "Arthur"<< endl;
    }else if(n1 < n2){
        cout << "Nikita"<< endl;
    }else{
        cout << "Draw"<< endl;
    }
    return 0;
}






/*#include <bits/stdc++.h>>
using namespace std;
int main() {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Yes" <<endl;
    } else
        cout << "No" <<endl;
    }

    return 0;
}
*/
