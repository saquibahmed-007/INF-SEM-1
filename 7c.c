#include<stdio.h>
void main ()
{
    int A[2][2],B[2][2],C[2][2],i,j,k;
    printf("enter values for A matrix");
    for (i=0;i<2;i++)
        for (j=0;j<2;j++)
        scanf("%d",&A[i][j]);
    printf("enter values for B matrix");
    for (i=0;i<2;i++)
        for (j=0;j<2;j++)
        scanf("%d",&B[i][j]);
   for (i=0;i<2;i++)
   {
       for (j=0;j<2;j++)
       {
           C[i][j]=0;
           for (int k=0;k<2;k++)
           C[i][j]=C[i][j]+A[i][j]*B[i][j];
       }
   }
       printf("result is\n");
    for (i=0;i<2;i++)
       {
        for (j=0;j<2;j++)
        printf("%d  ",C[i][j]);
    printf("\n");
       }
   }
