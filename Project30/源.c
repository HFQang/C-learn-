#include<stdio.h>

int main()
{
    int n = 10, i;
    double h = 100.0, h1, sum;
    sum = h;
    for (i = 0; i < n; i++)
    {
        h = h / 2;
        sum = sum + h * 2;
    }
    printf("第10次落地时共经过%.6f米\n", sum);
    printf("第10次反弹%.6f米", h);
    return 0;
}