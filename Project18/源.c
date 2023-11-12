#include<stdio.h>
int main(void)
{
	int a, b, c, d, i;
	for (i = 100; i < 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		d = a * a * a + b * b * b + c * c * c;
		if (i == d)
			printf("%-9d", i);
	}

	return 0;
}