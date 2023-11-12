#include<stdio.h>

int main(void)
{
	int a;
	printf("请输入一个整数：");	scanf_s("%d", &a);

	if (a % 2)
		puts("此整数为奇数");

	else
		puts("此整数为偶数");


	return 0;
}