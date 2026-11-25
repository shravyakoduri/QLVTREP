#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("String length = %d\n", count);

    return 0;
}