#include <stdio.h>
int main()
{
	int a;						//����һ������a��
	printf("������һ��������");
	scanf_s("%d",&a);			//����һ������

	if (a % 2 == 0)
		printf("%dΪż��",a);		//�ж��Ƿ�Ϊż��
	else  printf("%dΪ����",a);

	return (0);
}
