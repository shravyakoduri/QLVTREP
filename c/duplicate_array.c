#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 20, 10};
    int i, j;

    printf("Duplicate elements: ");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
