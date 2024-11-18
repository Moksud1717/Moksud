#include <bits/stdc++.h>
using namespace std;
int hcf(int n1, int n2);
int main(){
    int n1, n2;
    cout<<"\nEnter two positive integer : ";
    cin >> n1 >> n2;
    cout << "\nGCD of two numbers[ "<<n1<< " & " <<n2<<" ] is : "<<hcf(n1, n2)<<"\n";
    return 0;
}
//Function to calculate the HCF using the Euclidean algorithm
int hcf(int n1, int n2){
    if(n2 != 0){
          return hcf(n2, n1 % n2);
    }else{
     return n1;
    }
     return 0;
}





/*

hcf function is called with arguments 5 and 6.
Since n2 is not zero, the function is called recursively with arguments 6 and the remainder of the division 5 % 6 (which is 5).
The recursive call continues until n2 becomes zero. The steps are as follows:
    hcf(5, 6)
    hcf(6, 5)
    hcf(5, 1)
    hcf(1, 0)
At this point, n2 is zero, so the function returns the value of n1, which is 1.
The result is: "GCD of two numbers [5 & 6] is: 1"

*/
