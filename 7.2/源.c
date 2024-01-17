#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define N 3				//需要输入的学生个数
#define Student struct Student
Student{
	char* name;	//姓名
	long int num;		//学号
	float score;			//成绩
	Student* next;
};

int main(void)
{
	Student *head=NULL, *end=NULL, *p1=NULL;
	char* iname = (char*)malloc(sizeof(char) * 12);
	long int inum;
	float iscore, n = 0;
	printf("请输入学生的姓名学号成绩/学号/成绩:\n");
	scanf_s("%s,%ld,%f",iname,12,&inum,&iscore);

	while(n != N) 
	{
		p1 = (Student *)malloc(sizeof(Student));
		p1->name = (char*)malloc(sizeof(char) * 12);
		n++;
		if (n == 1) {
			strcpy_s(p1->name,12,iname); p1->num = inum;
			p1->score = iscore; p1->next = NULL;
			head = p1; end = p1;
		}
		else {
			printf("请输入学生的姓名学号成绩/学号/成绩:\n");
			scanf_s("%s,%ld,%f", p1->name,12, & p1->num, & p1->score);
			p1->next = NULL;
			end->next = p1; end = p1; p1 = NULL;
		}
	}
	free(iname);
	iname = NULL;
	/*Student* find = head;
	i = 1;
	while (i--)
	{find = find->next; }*/
	printf("%f", head->score);

	return 0;
}