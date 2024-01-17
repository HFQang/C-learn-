#include<stdio.h>
int count(char* num1, char* num2, int min_sum, int max_sum) {
    extern long long tranf(char* p, int n);
    extern int count_char(char* p);
    long long n1, n2, i;
    int sum = 0, j, p = 0, pp;
    n1 = tranf(num1, count_char(num1));
    n2 = tranf(num2, count_char(num2));
    for (i = n1; i <= n2; i++)
    {
        pp = 1;
        sum = 0;
        long long m = i;
        while (m > 0)
        {
            j = m % 10;
            m /= 10;
            sum += j;
            if (sum > max_sum)
            {
                pp = 0;
                break;
            }
        }
        if (pp && min_sum <= sum && sum <= max_sum)
        {
            p++;
        }

    }
    return p;
}

int count_char(char* p)
{
    int i;
    for (i = 0; p[i] != '\0'; i++);
    return i;
}

long long tranf(char* p, int n)
{
    long long sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        int t = p[i] - 48;
        sum = (sum * 10) + t;
    }
    return sum;
}

int main(void)                      //数值大超时了 555~
{
    char a[20] = "4179205230";
    char b[20] = "7748704426";
    int c = 8, d = 46;
    printf("%d", count(a, b, c, d));
    return 0;
}