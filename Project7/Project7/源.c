#include<stdio.h>

int main(void)
{
	double a, b;

	printf("请输入数字a：");
	scanf_s("%lf" , & a);

	printf("请输入数字b：");
	scanf_s("%lf" , & b );

	printf("它们的平均数为：%f" , (a + b) / 2 );

	return 0;
}