#include<stdio.h>
#include<string.h>

int fun_find(char* d)
{
	if (d == NULL || *d == '\0') {
		return 0;
	}
	int n, i, j, k,max = 1,mark;
	n = (unsigned)strlen(d);
	if (n == 1)	{return 1;}

	for (i = 0; i < n; i++)
	{
		mark = 1;
		j = i + 1;
		while (mark)
		{
			int times = 1;
			for (k = j-1; k >= i; k--)
			{
				if (d[j] == d[k]) { mark = 0; break; }
				times++;
			}
			if (times > max) { max = times; }

			if (j == n - 1) { break; }
			j++;
			
		}
		
	}
	return max;
}

int main(void)
{
	char a[100];
	scanf_s("%99s", &a,(unsigned)sizeof(a));
	printf("%d", fun_find(a));

	return 0;
}