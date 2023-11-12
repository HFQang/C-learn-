#include<stdio.h>
#define N 5
#define M 4
void fun(int *p, int m, int n)
{
	int a[N - M], i, j;
	for (j=0,i = M; i < N; i++,j++)
	{
		a[j] = p[i];
	}
	for (i = m-1; i >= 0; i--)
	{
		p[i + (N - M)] = p[i];
	}
	for (i = 0; i < N - M; i++)
	{
		p[i] = a[i];
	}

}
int main(void)
{
	int a[N], i, b;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	fun(a, M, N);
	for (i = 0; i < N; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}