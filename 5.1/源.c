#include"stdio.h"
int su(int a)				//�����ж�һ�����Ƿ�Ϊ�����ĺ���
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
		if (su(j) == 1)		printf("%-3d", j);		//�������
	}

	return 0;
}