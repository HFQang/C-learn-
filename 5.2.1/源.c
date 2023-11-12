#include"stdio.h"
#define N 8
void pai(int* p)						//冒泡法排序
{
	int i, j, t;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if (p[j] > p[j + 1])
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
}
int main()
{
	int a[N], i;
	for (i = 0; i < N; i++)
	{scanf_s("%d", &a[i]);}			//输出8个整数
	pai(a);							//使用函数对八个数进行排序
	for (i = 0; i < N; i++)
	{printf("%-3d", a[i]);}			//输出数据
	return 0;
}