#include <stdio.h>

int main()
{
    int n, original, temp, rem;
    int digits = 0, sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not an Armstrong number");
        return 0;
    }

    original = n;
    temp = n;

    do
    {
        digits++;
        temp = temp / 10;
    } while (temp != 0);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
            power = power * rem;

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
