#include <stdio.h>

int main() {
    double a, b, avg;
    scanf("%lf %lf", &a, &b);
    avg = ((a * 3.5) + (b * 7.5)) / 11.0;
    printf("MEDIA = %.5lf\n", avg);
    return 0;
}
