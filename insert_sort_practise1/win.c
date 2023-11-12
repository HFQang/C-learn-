#include<stdio.h>
#define N 10
void insert_sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        key = a[i];
        while (a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

}

int main()
{
    int a[N], i;
    for (i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);
    }

    insert_sort(a, N);
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}