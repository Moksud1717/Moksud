#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while(m>0)
    {
        m--;
        long long n;
        cin >> n;
        vector<long long> v;
        set<long long> s;
        long long x=0;
        for(long long i=0;i<n;i++)
        {
            cin >> x;
            s.insert(x);
        }
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            v.push_back(*itr);
        }
        long long maxi=1,num=1;
        long long j=0;
        for(long long i=1;i<v.size();i++)
        {
            if(v[i]-v[j] < n)
            {
                num++;
            }
            else
            {
                j++;
                num=i-j+1;
            }
            maxi=max(maxi,num);
        }
        cout << maxi << endl;

    }
}
