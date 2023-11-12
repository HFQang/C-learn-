#include<stdio.h>
int main(void)
{
	int k, i,g,a[5];
	for (k = 0; k < 5; k++)
		scanf_s("%d",&a[k]);

	for (k = 0; k < 4; k++)
	{
		
		for (i = k+1; i < 5; i++)
		{
			if (a[k] > a[i])
			{
				g = a[k];
				a[k] = a[i];
				a[i] = g;
				
			}
		}
	}
	for (k = 0; k < 5; k++)
		printf("%5d", a[k]);


	return 0;
}