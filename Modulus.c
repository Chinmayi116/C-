#include <stdio.h>

int main()
{
    int a, b, rem;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        rem = a % b;
        printf("Remainder = %d", rem);
    }
    else
    {
        printf("Modulus by zero is not possible");
    }

    return 0;
}
