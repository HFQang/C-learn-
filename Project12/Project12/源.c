#include<stdio.h>

int main(void)
{
	int a;
	printf("������һ��������");	scanf_s("%d", &a);

	if (a % 2)
		puts("������Ϊ����");

	else
		puts("������Ϊż��");


	return 0;
}