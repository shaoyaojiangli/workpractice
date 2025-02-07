// 编写一个名为 sumnarrays（）的函数，它接受两个数组作为参数，将两个数组中的所有值相加，并返回得到的结果。
#include <stdio.h>
#define N 5
void Put_Array(int *p);
int Sumnarrays(int *p, int *q);
int main()
{
    int arr1[N] = {0};
    int arr2[N] = {0};

    Put_Array(arr1);
    Put_Array(arr2);
    int sum = Sumnarrays(arr1, arr2);
    printf("两个数组和为:%d", sum);
    return 0;
}
void Put_Array(int *p)
{
    int num;
    int i = 0;
    printf("请输入数据:");
    while (1)
    {
        scanf("%d", &num);
        char c = getchar();
        p[i++] = num;
        if (c == '\n')
            break;
    }
}
int Sumnarrays(int *p, int *q)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += p[i];
        sum += q[i];
    }
    return sum;
}