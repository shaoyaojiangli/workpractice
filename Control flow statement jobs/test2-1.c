// 编程计算 1！ + 2！ + 3！ + …… + 10！的值。

#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    int sum = 0, mul = 1; // 定义和与乘

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            mul *= j; // 算单个阶乘
        }
        sum += mul; // 算阶乘和
        mul = 1;
    }
    printf("1!+2!+.....+100!等于：%d", sum);
    return 0;
}