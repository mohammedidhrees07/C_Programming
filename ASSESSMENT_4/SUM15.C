SUM16.C
//sum15
#include <stdio.h>

int main()
{
    int num, temp, first, last, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = num / power;
    last = num % 10;

    if (last % 2 != 0)
    {
        first = first - 1;
    }

    printf("%d", first * power + (num % power));

    return 0;
}