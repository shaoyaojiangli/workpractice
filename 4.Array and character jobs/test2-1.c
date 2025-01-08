// 利用数组实现斐波那契数列的前 30 项，并要求格式化对齐， 每行值输出5 个数。（斐波那契数列：1 1 2 3 5 8 13 21……）
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[30] = {1, 1};
    for (i = 2; i < 30; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (i = 0; i < 30; i++)
    {
        printf("%d ", arr[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
    return 0;
}