#include<stdio.h>
int main(void)
{
	int a;
	scanf_s("%d",&a);		//输出一个整数

	if (a < 10)
		printf("%d is less than 10.",a);
	else if(a<99)
		printf("%d is 10 to 99.", a);
	else if (a < 999)
		printf("%d is 100 to 999.", a);
	else
		printf("%d is 1000 or above.", a);	//判断在哪个区间
	return 0;
}