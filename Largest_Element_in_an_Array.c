#include <stdio.h>

int main()
{
    int a[100], n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("Largest element = %d", max);

    return 0;
}
