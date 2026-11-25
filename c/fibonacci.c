#include <stdio.h>

int main()
{
    int n = 10;
    int a = 0, b = 1, next;

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
