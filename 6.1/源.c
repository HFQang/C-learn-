#include<stdio.h>
void fun(char *p)
{
	int n = 0;
	while (p[n] != '\0')
	{
		n++;
	}
	int i;
	char t;
	for (i = 0; i < n / 2;i++)
	{
		t = p[i];
		p[i] = p[n - i -1 ];
		p[n - i -1 ] = t;
	}
}

int main(void)
{
	char a[100] = {'a','b','c','d','e','f'};
	fun(a);
	printf("%s", a);

	return 0;
}