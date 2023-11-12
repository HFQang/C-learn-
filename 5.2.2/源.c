#include <stdio.h>
void yanghui()
{
    int data[10][10];
    int i = 0;
    int j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            data[i][j] = 1;
        }
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < i; j++)
        {
            data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%-4d", data[i][j]);
        }
        printf("\n");
    }
}
int main()
{  
    yanghui();      //执行函数，打印杨辉三角
    return 0;
}
