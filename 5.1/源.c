#include"stdio.h"
int su(int a)				//创立判断一个数是否为素数的函数
{
	int i;
	if (a == 1 || a == 2)	return 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)	return 0;
	}
	return 1;
}

int main(void)
{
	int j;
	for (j = 1; j <= 100; j++)
	{
		if (su(j) == 1)		printf("%-3d", j);		//输出素数
	}

	return 0;
}