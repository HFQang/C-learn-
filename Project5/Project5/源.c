#include<stdio.h>

int main(void)
{
	int yer;
	printf("请输入一个整数：");
	scanf_s("%d",&yer);

	printf("它的最后一位数为：%d" , yer % 10);

	return 0;
}
