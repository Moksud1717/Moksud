#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int x;

    fgets(a, sizeof(a), stdin);
    printf("Length of string a = %zu \n",strlen(a));

    x = strlen(a);
    printf("Length of string b = %d \n",x);

    return 0;
}
