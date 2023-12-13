#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void delete(char *str , char ch)
{
	char b[100];
	strcpy(b, str);

	int i, j;
	for (i = 0, j = 0; b[i] != '\0'; i++)
	{
		if (b[i] != ch)		{str[j] = b[i]; j++; }
	}
	str[j] = '\0';
}
int main(void)
{
	char a[100] = "aaabbcccdeeefffgggggghhhhh";
	char ch;
	printf("请输入想要除去的字符：");
	scanf("%c", &ch);
	delete(a, ch);

	printf("%s", a);

	return 0;
}