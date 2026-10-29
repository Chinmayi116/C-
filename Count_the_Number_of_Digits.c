#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    do
    {
        count++;
        n = n / 10;
    } while (n != 0);

    printf("Number of digits = %d", count);

    return 0;
}
