#include<stdio.h>
void lian(char* p, char* d)
{
	int i, j, a;
	for (i = 0; p[i] != '\0'; i++) { a=1; }
	
	for (j = 0; d[j] != '\0'; j++)
	{
		p[i + j] = d[j];
	}
	p[i + j] = '\0';
}
int main()                                                  
{
	char a[100], b[100];
	scanf_s("%s %s",a,50,b,50);
	lian(a, b);
	printf("%s",a);
	return 0;
}