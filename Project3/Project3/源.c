#include<stdio.h>

int main(void)
{
	int x, y;						//������������

	puts("����������������");

	printf("����1:");
	scanf_s("%d", &x);				//����һ�����ִ������x

	printf("����2:");				
	scanf_s("%d", &y);				//���ڶ������ִ������y
	
	printf("����Ϊ��%d\n", x + y);   //�������֮��

	return 0;
} 