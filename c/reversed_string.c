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

    printf("Reversed string = ");

    for(i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}