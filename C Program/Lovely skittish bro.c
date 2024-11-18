#include <stdio.h>

int main() {
    int num, result = 0;
    int i;

    scanf("%u", &num);

    // Swap the bits of every pair
    for (i = 0; i < 32; i += 2) {
         int b1 = (num >> i) & 1;
         int b2 = (num >> (i + 1)) & 1;

        result |= (b2 << i) | (b1 << (i + 1));
    }

    printf("%u\n", result);

    return 0;
}
