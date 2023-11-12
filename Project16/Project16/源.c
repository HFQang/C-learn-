#include<stdio.h>
int main(void)
{
	int a, i;
	for (i = 1; i <= 10;i++)
	{
		printf("%d   ", i);
		
	}
	printf("\n");
	for (i = 1; i <= 10;i++)
	{
		printf("----", i);
		
	}
	int sum;
	for (i = 1; i <= 9; )
	{
		printf("\n");
		for (a = 1; a <= 9; )
		{
			sum = i * a;
			printf("%d   ", sum);
			a++;
		}
		i++;

	}

	return 0;
}