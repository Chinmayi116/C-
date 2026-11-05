#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
