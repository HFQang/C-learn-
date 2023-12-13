#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main()
{
    char a[3][10];
    char b[10];
        int i, j;
    for (i = 0; i < 3; i++)
    {
        gets_s(a[i],9);
    }
    for (i = 0; i < 3 - 1; i++)
    {
        for (j = 0; j < 3 - 1 - i; j++)
        {
            if (strcmp(a[j] , a[j + 1]) > 0)
            {
                strcpy(b, a[j]);
                strcpy(a[j] ,a[j + 1]);
                strcpy(a[j + 1] , b);

            }
        }

    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", a[i]);
    }

    return 0;
}