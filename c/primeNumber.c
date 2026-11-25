#include <stdio.h>

int main()
{
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        prime = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 1)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}