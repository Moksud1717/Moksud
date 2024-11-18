#include<stdio.h>
int fibon(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibon(n-1)+fibon(n-2));
    }
}
    int main()
    {
        int i,n;
        scanf("%d",&n);
        printf("%d\n",fibon(n-1));
        for(i=0;i<n;i++)
        {
            printf("%d ",fibon(i));
        }
    return 0;
}
