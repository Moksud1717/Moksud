#include <bits/stdc++.h>
using namespace std;
int checkA(const vector<int>& a, int n, int k){
    for(int i=0; i<n; i++)
        if(k%a[i])
        return 0;
    return 1;
}
int checkB(const vector<int>& b, int n,int k){
    for(int i=0; i<n; i++)
        if(b[i]%k)
        return 0;
    return 1;
}
int main(){
  int n, m;
  cin>> n>> m;
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>> a[i];
  }
  vector<int>b(m);
  for(int i=0; i<m; i++){
    cin>> b[i];
  }
  int cnt=0;
  for(int i=1; i<=100; i++)
    if(checkA(a, n, i) && checkB(b, m, i))
        cnt++;
        cout<< cnt;
  return 0;
}


Input
2 3
2 4
16 32 96
Output
3

