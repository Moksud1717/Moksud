#include <stdio.h>

#define ll long long
#define endl "\n"

int main() {
    ll t;
    scanf("%lld", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        ll sum = 0;
        while (n > 0) {
            sum += n;
            n = n / 2;
        }
        printf("%lld%s", sum, endl);
    }
    return 0;
}

