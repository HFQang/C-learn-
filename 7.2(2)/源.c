#include<stdio.h>
#include<malloc.h>
#define N 3				//��Ҫ�����ѧ������
#define Student struct Student
Student{
	char name[20];	//����
	long int num;		//ѧ��
	float score;			//�ɼ�
	Student* next;
} p[3] = { {"zqk",001,70.0,"NUll"},{"zyw",002,80.0,"NULL"}, {"zlz",003,90.0,"NULL"} };

int main(void)
{
	int i ;
	Student* head, * end, * d;
	d = &p[0];
	head = d;
	end = d;
	for (i = 0; i < N-1; i++)
	{
		end->next = &p[i + 1];
		end= &p[i + 1];
	}
	
	printf("%sѧ���ɼ�Ϊ%0.2f\n", head->next->next->name,head->next->next->score);
	return 0;
}