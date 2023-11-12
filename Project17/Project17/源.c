#include<stdio.h>
int main(void)
{
	char a;
	int b, c, d;

	scanf_s("%d %c", &b, &a);
	if (b <= 1000)
	{
		switch (a)
		{
		case 'y':printf("您需要支付13元");
		case 'n':printf("您需要支付8元");
		}
	}
	else
	{
		c = b % 500;
		d = b - 1000;
		if (c = 0)
			switch (a)
			{
			case 'y':printf("您需要支付%d元", 8 + (d / 500) * 4 + 5); break;
			case 'n':printf("您需要支付%d元", 8 + (d / 500) * 4); break;
			}
		else
			switch (a)
			{
			case 'y':printf("您需要支付%d元", 8 + (d / 500 + 1) * 4 + 5); break;
			case 'n':printf("您需要支付%d元", 8 + (d / 500 + 1) * 4); break;
			}
	}

	return 0;
}