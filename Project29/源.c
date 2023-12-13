#include<stdio.h>
int funlong(char a[])
{
    int i, a;
    for (i = 0; a[i] != '\0'; i++)
    {
        a = 0;
    }
    return i;
}

int main()
{
    char a[100];
    scanf_s("%s", a,10);
    printf("%d", funlong(a));
    return 0;
}