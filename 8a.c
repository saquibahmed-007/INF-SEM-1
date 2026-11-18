#include <stdio.h>
int main()
{
    int a[10][10];
    int m, n, i, j, count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    printf("\nOriginal Matrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if (count > (m * n) / 2)
    {
        printf("\nIt is a Sparse Matrix\n");
    }
    else
    {
        printf("\nIt is NOT a Sparse Matrix\n");
    }

    return 0;
}
