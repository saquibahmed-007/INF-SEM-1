#include<stdio.h>
void main ()
{
    int m,n,i;
    printf("enter m value\n");
    scanf("%d",&m);

    printf("enter n value\n");
    scanf("%d",&n);
     for (i=m;i<=n;i++)
        if (i%2==0)
     {
         printf("%d\n",i);
     }
}
