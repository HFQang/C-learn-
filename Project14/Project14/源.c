#include<stdio.h>
//��Ҫ������ļ�
//����ʾ����ͨ����������ʧ�ܣ�����Ա�Ԥ�������ʵ�����֮��Ĳ���
int main()
{
    int a[4];
    int r = 0;
    int b = 0;
    int s = 0;

    for (r = 0; r < 4; r++)
        scanf_s("%d", &a[r]);

    for (b = 0; b < 3; b++)
    {   
        for (r = 0; r < 3-b; r++)
        {
            if (a[r] > a[r + 1])
            {
             s = a[r];
             a[r] = a[r+1];
             a[r+1] = s;
            }
        }
    }

    for (r = 0; r < 4; ++r)
        printf("%d ", a[r]);



    //put your codes here.
    return 0;
}