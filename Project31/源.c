#include<stdio.h>
#include<malloc.h>

enum jinzhi {
	TWO = 1, TEN = 2, sign = -1				//TWO�������������Ϊ����������TENͬ��
};									//sign��Ϊʮ����ת������ʱ�����������������ĩβ��־

int mypower(int n)					//�����ݺ��������ڶ�����תʮ�ĺ���
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

void intord(int* p, int n)			//����ֵ���򴢴�
{
	int i, t;
	for (i = 0; i < n / 2; i++)
	{
		t = p[i];
		p[i] = p[n - 1 - i];
		p[n - 1 - i] = t;
	}
}

int tranf_two(int num)						//������תʮ���ƺ���
{
	int a, b, r, sum = 0, i = 0;
	a = num;
	while (a > 0)
	{
		b = a / 10;
		r = a % 10;
		sum = sum + r * mypower(i);			//��������ÿλתʮ���

		a = b;
		i++;
	}
	return sum;
}

int *tranf_ten(int num)							//ʮ����ת�����ƺ���
{
	int a, b, i = 0;
	int *r = (int *)malloc(sizeof(int) * 30);			//����ռ䴢������Ƹ�λ����ֵ����Ҫ�������������
	a = num;
	do {
		b = a / 2;
		r[i] = a % 2;
		
		i++;
		a = b;
		if (a < 2)	break;

	} while (1);								//�������Ƹ�λ����ֵ������r�У���ʱ����Ϊ����
	r[i] = a;									//�����һλ��
	intord(r,i+1);								//�����鷴��
	r[i + 1] = sign;
	
		return r;
}

int main(void)
{
	int form, num;
	printf("��ѡ������Ҫת�Ľ�����:\n(1)��-->ʮ\t(2)ʮ-->��\n");
	scanf_s("%d", &form);
	printf("��������Ҫת���Ƶ�����");
	scanf_s("%d", &num);

	if (form == TWO) {
		int p;
		p = tranf_two(num);
		printf("����ת��ʮ����Ϊ��%d", p);
	}


	if (form == TEN) {
		int i=0,*p;
		p=tranf_ten(num);
		printf("����ת��������Ϊ��");
		while (p[i] != sign)				//��signΪ�ж���������Ƶĸ�λ��
		{
			printf("%d", p[i]);
				i++;
				
		}
		free(p);							//�ͷ�p
	}

	return 0;
}