// 有一个分数序列：
// 2/1，3/2，5/3，8/5，13/8，21/13，... 求出这个数列的前 20 项之和。

#include <stdio.h>
int main()
{
    float i = 1, j = 2, sum = 0, tmp;
    int count = 0;
    while (count < 20)
    {
        sum += j / i;
        tmp = j;
        j = j + i;
        i = tmp;
        count++;
    }
    printf("前二十项之和是：%f", sum);

    return 0;
}