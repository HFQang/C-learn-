#include<stdio.h>

int main(void)
{
	int ar[10] = { 0 };
	int a = 0;
	int sum = 0;

	for (a = 0; a < 10; a++)
	{
		scanf_s("%d", &ar[a]);
			sum = sum + ar[a];
	}

	printf("sum = %d", sum);

	return 0;
}
