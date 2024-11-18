#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("a > b\n", a);
    }
    else if (b > a)
    {
        printf("a < b\n", b);
    }
    else
    {
        printf("a == b\n");
    }
    return 0;
}
