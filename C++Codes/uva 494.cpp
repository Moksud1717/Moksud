#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[2000];
    int t,f,a,c;

    while(gets(s)){
        c=0;

        for(t=0;s[t]!='\0';t++){

            if(

            ((s[t]>='A' && s[t]<='Z') || (s[t]>='a' && s[t]<='z'))&&(s[t+1]<'a'||s[t+1]>'z') && (s[t+1]<'A'||s[t+1]>'Z'))

            c++;

        }
        cout<<c<<endl;
    }
    return 0;
}
