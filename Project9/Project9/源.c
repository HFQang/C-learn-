#include<stdio.h>

int main(void)
{
	int a = 0;
	double b = 0;

	printf("请输入您的身高：");		scanf_s("%d", &a);

	b = a - 100;

	printf("预测您的体重为%.1fkg", b * 0.9);



	return 0;
}