#include<stdio.h>
struct stu
{
	char name[10];
	int b;
}stud[3] = { {"wumen",17} ,{"suxiu",22}, {"huiqiang",20}};

int main(void)
{int a[3], i,j, p;
	for (i = 0; i < 3; i++)		{a[i] = stud[i].b;}
	for (i = 1; i < 3; i++)
	{
		p = a[i];
		j = i - 1;
		while (p < a[j]&&j>=0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = p;
	}
	for (i = 0; i < 3; i++)
	{
		if (stud[i].b == a[1])		printf("三人中年龄居中者姓名为：%s,年龄为：%d", stud[i].name, stud[i].b);
	}
	return 0;
}