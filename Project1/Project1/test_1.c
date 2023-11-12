#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int hb ;
	int wj ;

	printf("请输入数字：");
	scanf_s("%d", &hb);
	wj = hb + 10;

	printf("得数为：%d。\n", wj);

	return 0;
}