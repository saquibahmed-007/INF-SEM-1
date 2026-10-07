#include<stdio.h>
void main ()
{
    int oct,bin=0,i=1,rem;
    printf("enter number in decimal");
    scanf("%d",&oct);
    while(oct!=0)
    {
        rem=oct%8;
        oct=oct/8;
        bin=bin+rem*i;
        i=i*10;
    }
   printf("%d",bin);
}
