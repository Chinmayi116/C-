#include <stdio.h>

int main()
{
    int a, b, x, y, rem, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }

    gcd = x;

    if (a == 0 || b == 0)
        printf("LCM = 0");
    else
        printf("LCM = %d", (a / gcd) * b);

    return 0;
}
