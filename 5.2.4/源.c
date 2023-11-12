#include<stdio.h>
#define N 9
void exchange(int* p)
{
	int i, t;
	for (i = 0; i < N/2; i++)
	{
		t = p[i];
		p[i] = p[N-1 - i];
		p[N -1- i] = t;
	}
}
int main()
{
	int a[N] = { 1,2,3,4,5,6,7,8,9 }, i;
	exchange(a);
	for (i = 0; i < N; i++)
	{	
		printf("%d ",a[i]);
	}
	return 0;
}
