#include <string.h>
#include<stdio.h>
int chnum(char* p)
{
	int num = 0, k, len, j;
	len = strlen(p);
	for (; len>=0; p++)
	{
		k = *p-'0';   j = (--len);
		while (j--)
			k = k * 10;
		num = num + k;
	}
	return(num);
}
int main(void)
{
	char a[] = "1234";
	int b;
	b=chnum(a);
	printf("%d", b);


	return 0;
}