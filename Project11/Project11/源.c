#include<stdio.h>

int main(void)
{
	int max(int x, int y);
	int a, b, c;

	scanf("%d %d", &a, &b);
	c = max(a, b);

	printf("���ֵΪ%d", c);

	return 0;
}