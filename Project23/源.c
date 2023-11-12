#include <stdio.h>
int main()
{
	int a;						//声明一个变量a；
	printf("请输入一个整数：");
	scanf_s("%d",&a);			//输入一个整数

	if (a % 2 == 0)
		printf("%d为偶数",a);		//判断是否为偶数
	else  printf("%d为奇数",a);

	return (0);
}
