#include<stdio.h>
#define MAX 100
int main(void)

{
	int num[MAX] = { 3, 2, 1, 5, 4 };

	int n=5, m=3, sum = 0, t, i, j;
	//scanf_s("%d %d", &n, &m);
	//for (j = 0; j < n; j++)
	//{
	//	scanf_s("%d", &num[j]);
	//	//		getchar();
	//	//		num[j]=x;
	//}
	//	max=num[0];
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}

	}
	for (int i = n - 1; i > n - 1 - m; i--) {
		//			printf("%d ",num[i]);
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}