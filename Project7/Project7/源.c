#include<stdio.h>

int main(void)
{
	double a, b;

	printf("����������a��");
	scanf_s("%lf" , & a);

	printf("����������b��");
	scanf_s("%lf" , & b );

	printf("���ǵ�ƽ����Ϊ��%f" , (a + b) / 2 );

	return 0;
}