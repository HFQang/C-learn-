#include<stdio.h>
int main(void)
{
	int a[4];
	int i = 0;
	printf("�������ĸ�������");
	for(i=0;i<4;i++)
		scanf_s("%d",&a[i]);		//ʹ���������ĸ�����

	int max,min;
	max = a[0];	min = a[0];            //����max��min����

	for (i = 1; i <= 3; i++)
	{
		if (a[i] > max)	max = a[i];    //�ҳ������Сֵ
		if (a[i] < min)	min = a[i];
	}

	printf("���ֵΪ%d����СֵΪ%d", max, min);	//������ֵ����Сֵ
	return 0;
}