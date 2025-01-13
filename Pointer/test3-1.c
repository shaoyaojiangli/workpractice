// 利用指针，对一个数组 a[10], 输入相应的元素，并将这些元素输出到屏幕上
#include <stdio.h>
#define N 10
int main()
{
    int arr[N] = {0};
    int *p = arr;
    int t;
    printf("请输入十个以内的数字：");

    for (int i = 0; i < N; i++)
    {
        t++;
        scanf("%d", p++);
        if (getchar() == '\n')
            break;
    }
    p = arr;
    for (int i = 0; i < t; i++)
        printf("%d ", *p++);

    return 0;
}