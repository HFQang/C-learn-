#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
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