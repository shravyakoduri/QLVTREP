#include <stdio.h>

int main()
{
    int n, temp, sum = 0;

    int fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        sum = sum + fact[n % 10];
        n = n / 10;
    }

    if(temp > 0 && sum == temp)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
