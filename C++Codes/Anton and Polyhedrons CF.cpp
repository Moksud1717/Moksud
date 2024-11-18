#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int totalfaces = 0;
    for ( int i = 0; i < n; i++){
        string poly;
        cin >> poly;

        if (poly == "Tetrahedron"){
            totalfaces += 4;
        }
        else if(poly == "Cube"){
            totalfaces += 6;
        }
        else if(poly == "Octahedron"){
            totalfaces += 8;
        }
        else if (poly == "Dodecahedron"){
            totalfaces += 12;
        }
        else if (poly == "Icosahedron"){
            totalfaces += 20;
        }
        return 0;

    }

}
