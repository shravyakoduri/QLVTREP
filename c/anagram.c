#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1, count2, flag = 0;

    printf("Enter first string: ");
    if(scanf("%99s", str1) != 1)
        return 1;

    printf("Enter second string: ");
    if(scanf("%99s", str2) != 1)
        return 1;

    if(strlen(str1) != strlen(str2))
    {
        flag = 1;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++)
        {
            count1 = 0;
            count2 = 0;

            for(j = 0; str1[j] != '\0'; j++)
            {
                if(str1[i] == str1[j])
                    count1++;

                if(str1[i] == str2[j])
                    count2++;
            }

            if(count1 != count2)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("Both strings are anagrams\n");
    else
        printf("Both strings are not anagrams\n");

    return 0;
}