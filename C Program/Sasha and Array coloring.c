#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define endl "\n"

int main() {
    ll t;
    scanf("%lld", &t);
    while (t--) {
        ll n, tmp;
        scanf("%lld", &n);
        ll arr[n];
        ll c = 0;
        for (ll i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }

        for (ll i = 0; i < n / 2; i++) {
            c += abs(arr[i] - arr[n - i - 1]);
        }
        printf("%lld\n", c);
    }
    return 0;
}
