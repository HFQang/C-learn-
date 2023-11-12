#include<stdio.h>

int main(void)
{
	int a, b;
	puts("请输入两个整数");
	printf("整数a：");		scanf_s("%d",&a);
	printf("整数b：");		scanf_s("%d",&b);

	printf("整数a是整数b的%d %%" , a*100/b);

	return 0;
}