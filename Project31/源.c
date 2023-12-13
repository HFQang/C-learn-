#include<stdio.h>
#include<malloc.h>

enum jinzhi {
	TWO = 1, TEN = 2, sign = -1				//TWO代表输入的数字为二进制数，TEN同理。
};									//sign作为十进制转二进制时储存二进制数的数组末尾标志

int mypower(int n)					//二次幂函数，用于二进制转十的函数
{
	int a = 1;
	if (n == 0) { return 1; }
	else {
		while (n--) {
			a = a * 2;
		}
	}
	return a;
}

void intord(int* p, int n)			//数组值反序储存
{
	int i, t;
	for (i = 0; i < n / 2; i++)
	{
		t = p[i];
		p[i] = p[n - 1 - i];
		p[n - 1 - i] = t;
	}
}

int tranf_two(int num)						//二进制转十进制函数
{
	int a, b, r, sum = 0, i = 0;
	a = num;
	while (a > 0)
	{
		b = a / 10;
		r = a % 10;
		sum = sum + r * mypower(i);			//将二进制每位转十求和

		a = b;
		i++;
	}
	return sum;
}

int *tranf_ten(int num)							//十进制转二进制函数
{
	int a, b, i = 0;
	int *r = (int *)malloc(sizeof(int) * 30);			//申请空间储存二进制各位的数值（需要在主函数输出）
	a = num;
	do {
		b = a / 2;
		r[i] = a % 2;
		
		i++;
		a = b;
		if (a < 2)	break;

	} while (1);								//将二进制各位的数值储存在r中（此时数组为反序）
	r[i] = a;									//储存第一位数
	intord(r,i+1);								//将数组反序
	r[i + 1] = sign;
	
		return r;
}

int main(void)
{
	int form, num;
	printf("请选择你需要转的进制数:\n(1)二-->十\t(2)十-->二\n");
	scanf_s("%d", &form);
	printf("请输入需要转进制的数：");
	scanf_s("%d", &num);

	if (form == TWO) {
		int p;
		p = tranf_two(num);
		printf("该数转换十进制为：%d", p);
	}


	if (form == TEN) {
		int i=0,*p;
		p=tranf_ten(num);
		printf("该数转换二进制为：");
		while (p[i] != sign)				//以sign为判断输出二进制的各位数
		{
			printf("%d", p[i]);
				i++;
				
		}
		free(p);							//释放p
	}

	return 0;
}