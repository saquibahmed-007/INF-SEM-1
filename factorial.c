#include<stdio.h>
void main ()
{
    int i,n,f=1;
    printf("enter the value of n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("no factorial");
    }
    else

        for (i=1;i<=n;i++)
    {
     f=f*i;
    }
    printf("%d",f);
}
