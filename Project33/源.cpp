#include<stdio.h>
#define N 5
int main(void)
{
	int a, b,c,i, p = 1;
	scanf_s("%d", &a);
	for (i = 1; i < N; i++)
	{
		scanf_s("%d", &b);
		if (a-b<=0)
		{
			p = 0; 
			printf("Yes!");
			break;
		}
		a = b;
	}
	if (p == 1) {
		printf("No!");
	}
	return 0;
}