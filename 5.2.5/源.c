#include<stdio.h>
void find(int p[], int d)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (p[i] == d)
		{
			printf("���ַ��������λ��Ϊ��%d", i+1);
			break;
		}
	}
	return 0;
}
int main(void)
{
	int a[10], b, i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d",&b);
	find(a, b);

	return 0;
}