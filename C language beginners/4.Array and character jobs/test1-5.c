// 求一个 3 * 3 的整型矩阵对角线元素之和。

#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int sum1 = 0, sum2 = 0;
    printf("请输入数组内的元素：");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0, j = 0; j < 3; i++, j++)
        sum1 += arr[i][j];
    for (i = 2, j = 0; j < 3; i--, j++)
        sum2 += arr[i][j];
    printf("主对角线元素和为：%d,副对角线元素和为：%d\n", sum1, sum2);

    return 0;
}