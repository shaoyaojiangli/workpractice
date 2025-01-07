// 将一个数组中的值按逆序重新存放。
#include <stdio.h>
int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tmp = 0;

    for (int i = 0; i < 4; i++)
    {
        tmp = a[i];
        a[i] = a[9 - i - 1];
        a[9 - i - 1] = tmp;
    }
    printf("逆序后数组：");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}