//sum14
#include <stdio.h>

int main()
{
    int num, temp, first, last, middle, digits = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Find 10^(digits-1)
    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = num / power;
    last = num % 10;
    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Result = %d", result);

    return 0;
}