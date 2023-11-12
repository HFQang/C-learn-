#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
int main()
{
    int a, b, c, d, e, f;
    int s = 0;
    scanf_s("%d:%d %d:%d", &a, &b, &c, &d);
    printf("%d %d %d %d\n",a,b,c,d);
    e = b / 10;     f = d / 10;

    if (e != f)
    {
        switch (e)
        {
        case 3:s = s + (10 - b % 10) * 100;
        case 4:s = s + (10 - b % 10) * 150;
        case 5:s = s + (10 - b % 10) * 50;
        }
        switch (f)
        {
        case 4:s = s + (d % 10) * 150;
        case 5:s = s + (d % 10) * 50;
        }
        if (f - e > 1)
            s = s + 10 * 150;
    }

    else
    {
        switch (e)
        {
        case 3:s =(d - b) * 100;
        case 4:s =(d - b) * 150;
        case 5:s =(d - b) * 50;
        }
    }
    printf("%d米", s);
    return 0;
}