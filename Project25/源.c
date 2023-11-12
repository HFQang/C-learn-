#include<stdio.h>
void outarray(int (*p)[5], double* d)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-8d", p[i][j]);
		}
		printf("%-8.1f", d[i]);
		printf("\n");
	}
	double sum = 0;
	for (j = 0; j < 5; j++)
	{
		sum = p[0][j] + p[1][j] + p[2][j];
		printf("%-8.1f", sum / 3.0);
	}
	printf("%-8.1f", (d[0] + d[1] + d[2]) / 3.0);
	return 0;
}
void enter(int (*p)[5])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &p[i][j]);
		}
	}
}
void aver(int (*p)[5], double *d)
{
	int i, j;
	float sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum = sum + p[i][j];
		}
		d[i] = sum / 5.0;
		sum = 0;
	}

}
int main(void)
{
	int a[3][5];
	double b[3];
	enter(a);
	aver(a, b);
	printf("\n");
	outarray(a, b);
	return 0;
}