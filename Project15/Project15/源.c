#include<stdio.h>
#include <math.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double fabs_a = fabs(a);
    double fabs_b = fabs(b);

    double num;

    num = (fabs_a - 2.0) * (fabs_a - 2.0) + (fabs_b - 2.0) * (fabs_b - 2.0);

    if (num <= 1)
        puts("10");
    else
        puts("0");


    //put your codes here.
    return 0;