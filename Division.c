#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        printf("Division = %d", a / b);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}
