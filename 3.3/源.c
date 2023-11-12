#include<stdio.h>
#define N 9
int main(void)
{
	int a[9] = { 1,2,3,4,5,6,7,8,9 }, i, t;
	for (i = 0; i < (0 + N)/2; i++)
	{
		t = a[i];
		a[i] = a[8 - i];
		a[8 - i] = t;
	}

	for (i = 0; i < 9; i++)
		printf("%-3d", a[i]);

	return 0;
}