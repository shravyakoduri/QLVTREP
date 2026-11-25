#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 20, 10};
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
                break;
        }

        if(i == j)
            printf("%d ", a[i]);
    }

    return 0;
}
