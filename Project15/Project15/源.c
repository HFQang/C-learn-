#include<stdio.h>
#include <math.h>
//��Ҫ������ļ�
//����ʾ����ͨ����������ʧ�ܣ�����Ա�Ԥ�������ʵ�����֮��Ĳ���
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