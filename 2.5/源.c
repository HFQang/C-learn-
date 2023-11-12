#include<stdio.h>
int main(void)
{
	int a;
	printf("ÇëÊäÈëÄãµÄ³É¼¨£º");
	scanf_s("%d", &a);

	if (a >= 90)
		printf("A");
	else if (a >= 81)
		printf("B");
	else if (a >= 70 && a <= 79)
		printf("C");
	else if (a >= 60 && a <= 69)
		printf("D");
	else
		printf("E");

	return 0;
}