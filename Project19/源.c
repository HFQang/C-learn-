#include<stdio.h>
int main(void)
{
	int i = 1;
	int a, max;
	scanf_s("%d",&a);
	max = a;
	for (i = 1; i < 3; i++)
	{
		scanf_s("%d", &a);
		if (a > max)
			max = a;
	}
	printf("%d",max);
	return 0;
}