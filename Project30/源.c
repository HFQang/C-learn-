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
    printf("��10�����ʱ������%.6f��\n", sum);
    printf("��10�η���%.6f��", h);
    return 0;
}