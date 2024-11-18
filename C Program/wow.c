#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);

    if (x > 0 && x < 50) {
        printf("W");
        for (int i = 1; i <= x; i++) {
            printf("o");
        }
        printf("w\n");
    } else {
        printf("\n");
    }

    return 0;
}
