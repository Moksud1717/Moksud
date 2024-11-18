#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int i;
    if (n <= k) {
        i = 2;
    } else {
        i = (2 * n + k - 1) / k;
    }

    printf("%d\n", i);

    return 0;
}



