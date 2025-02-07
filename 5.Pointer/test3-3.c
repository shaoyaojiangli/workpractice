// 指针实现排序

#include <stdio.h>
#define N 10
int main()
{

    int arr[N] = {0};
    int t = 0, max, tmp = 0;
    int *p = arr;
    printf("请输入要排序的序列：");
    for (int i = 0; i < N; i++)
    {
        t++;
        scanf("%d", p + i);
        if (getchar() == '\n')
            break;
    }
    for (int i = 0; i < t; i++)
    {
        max = i;
        for (int j = i + 1; j < t; j++)
        {
            if (*(p + max) < *(p + j))
                max = j;
        }
        if (max != i)
        {
            tmp = *(p + i);
            *(p + i) = *(p + max);
            *(p + max) = tmp;
        }
    }

    for (int i = 0; i < t; i++)
        printf("%d ", *(p + i));
    return 0;
}