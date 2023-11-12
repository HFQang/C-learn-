#include<stdio.h>
int main(void)
{
	int a[10][10] = { 0 };
	int i, j;
	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			a[i][j] = 1;

	for (i = 1; i < 10; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

	for (i = 0; i < 10; i++)
	{

		printf("\n");
		for (j = 0; j <= i; j++)
		{
			printf("%-6d", a[i][j]);
		}
	}
	return 0;
}