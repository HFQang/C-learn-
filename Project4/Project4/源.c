#include<stdio.h>

int main(void)
{
	int x, y, z;
	printf("请输入第一个数字：");			scanf_s("%d", & x);
	printf("请输入第一个数字：");			scanf_s("%d", & y);
	printf("请输入第三个数字：");			scanf_s("%d", & z);

	int em;
	em = x + y + z;
	printf("三个数相加的得数为：%d" , em);

	return 0;
}