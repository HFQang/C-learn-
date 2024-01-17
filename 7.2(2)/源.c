#include<stdio.h>
#include<malloc.h>
#define N 3				//需要输入的学生个数
#define Student struct Student
Student{
	char name[20];	//姓名
	long int num;		//学号
	float score;			//成绩
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
	
	printf("%s学生成绩为%0.2f\n", head->next->next->name,head->next->next->score);
	return 0;
}