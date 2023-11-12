#include<stdio.h>

int main(void)
{
	int x, y;						//这是两个变量

	puts("请输入两个整数。");

	printf("整数1:");
	scanf_s("%d", &x);				//将第一个数字存入变量x

	printf("整数2:");				
	scanf_s("%d", &y);				//将第二个数字存入变量y
	
	printf("得数为：%d\n", x + y);   //算出两数之和

	return 0;
} 