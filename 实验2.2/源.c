#include<stdio.h>
int main(void)
{
	int a[4];
	int i = 0;
	printf("请输入四个整数：");
	for(i=0;i<4;i++)
		scanf_s("%d",&a[i]);		//使用数组存放四个整数

	int max,min;
	max = a[0];	min = a[0];            //创立max，min变量

	for (i = 1; i <= 3; i++)
	{
		if (a[i] > max)	max = a[i];    //找出最大最小值
		if (a[i] < min)	min = a[i];
	}

	printf("最大值为%d，最小值为%d", max, min);	//输出最大值和最小值
	return 0;
}