//sum 10
#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 10; i <= 99; i++)
    {
        if(i % 2 != 0 && i / 10 == 7)
        {
            sum = sum + i;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}